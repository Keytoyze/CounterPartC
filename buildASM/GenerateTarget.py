# eax: return
import sys

if len(sys.argv) != 3:
    print("usage: python [IR path] [asm path]")

template_function = """{function_name}:
	pushq	%rbp
	movq	%rsp, %rbp
{function_section}
.{function_name}_end:
	leave
	ret
"""

ir = open(sys.argv[1]).read().split("\n")
asm = sys.argv[2]

# TODO: global function

function_name = None
return_type = None
function_param_num = 0
function_arg_num = 0
stack_map = {} # var name -> stack offset
stack_size = 4 # stack bottom is %rsp
register_var = {
    "%eax": None,
    "%ebx": None,
    "%ecx": None,
    "%edx": None
} # register name -> var name
register_8_map = {
    "%eax": "%al",
    "%ebx": "%bl",
    "%ecx": "%cl",
    "%edx": "%dl"
}
# TODO: param to stack
param_registers = [
    "%edi", "%esi", "%edx", "%ecx", "%r8d", "%r9d"
]
function_body = []
out = ""

operations = {
    'OP_ADD': ("addl", ""),
    "OP_SUB": ("subl", ""),
    "OP_MUL": ("imull", ""),
    "OP_DIV": ("", ""),
    "OP_MOD": ("", ""),
    "OP_LS": ("sall", ""),
    "OP_RS": ("sarl", ""),
    "OP_LT": ("cmpl", ""),
    "OP_GT": ("cmpl", ""),
    "OP_LTE": ("cmpl", ""),
    "OP_GTE": ("cmpl", ""),
    "OP_EQ": ("cmpl", ""),
    "OP_NEQ": ("cmpl", ""),
    "OP_AND": ("andl", ""),
    "OP_OR": ("orl", ""),
    "OP_XOR": ("xorl", ""),
    "LOGICAL_AND": ("andl", ""),
    "LOGICAL_OR": ("orl", ""),
}

cmpl_operations = {
    "OP_LT": ("setl", ""),
    "OP_GT": ("setg", ""),
    "OP_LTE": ("setle", ""),
    "OP_GTE": ("setge", ""),
    "OP_EQ": ("sete", ""),
    "OP_NEQ": ("setne", "")
}

# put var from stack into proper register whenever var is absent from register
# return var register & free_register
def var_to_register(var):
    result = None
    free_register = set()
    other_register = set()
    print(register_var)
    for register, var_bind in register_var.items():
        if var_bind == var:
            result = register
            print("hit " + var + " " + register)
        elif var_bind is not None:
            other_register.add(register)
        else:
            free_register.add(register)
    if result is None:
        if len(free_register) == 0:
            result = other_register.pop()
        else:
            result = free_register.pop()
        print("miss " + var + " " + result)        
        # fetch value
        offset = stack_map[var]
        function_body.append("movl\t{offset}(%rbp), {register}   \t# {offset}(%rbp) = {v}".format(
            offset=offset, 
            register=result,
            v=var
            ))
        # bind register
        register_var[result] = var
    return result

for line in ir:
    elements = line.split(" ")
    if line.strip() == "":
        continue
    if function_name == None:
        if elements[0] == "FUNCTION":
            _, function_name, return_type = elements
            stack_map = {}
            stack_size = 4
            function_body = []
            function_arg_num = 0
            function_param_num = 0
    else:
        if elements[0] == "PARAMETER":
            _, var, size, _ = elements
            reg = param_registers[function_param_num]
            function_param_num += 1
            stack_map[var] = -stack_size
            stack_size += int(size)
            function_body.append("movl\t{r}, {offset}(%rbp)   \t# param: {offset}(%rbp) = {v}".format(
                r=reg,
                offset=stack_map[var],
                v=var
                ))
        elif elements[0] == "ARGUMENT":
            reg = param_registers[function_arg_num]
            function_arg_num += 1
            if reg in register_var:
                print("clear register: " + reg)
                register_var[reg] = None
            function_body.append("movl\t{v0}(%rbp), {r}   \t# argu: {v0}(%rbp) = {v}".format(
                v0=stack_map[elements[1]],
                v=elements[1],
                r=reg
            ))
        elif elements[0] == "CALL":
            function_arg_num = 0
            return_reg = elements[2]
            function_body.append("call\t%s" % elements[1])
            function_body.append("movl\t%eax, {r}".format(r=return_reg))
        elif elements[0] == "MALLOC_CONST":
            _, var, size, _ = elements
            stack_map[var] = -stack_size
            stack_size += int(size)
        elif elements[0] == "MALLOC":
            pass
        elif elements[0] == "ASSIGN_CONST_INT":
            offset = stack_map[elements[1]]
            function_body.append("movl\t${const}, {offset}(%rbp)   \t# {offset}(%rbp) = {v}".format(
                const=elements[2], 
                offset=offset,
                v=elements[1]
                ))
        elif elements[0] == "ASSIGN":
            # var2 = var1
            _, var2, var1 = elements
            if var1.startswith("*"):
                var1 = var1[1:]
                r1 = var_to_register(var1)
                source = "(%s)" % r1
            elif var1.startswith("&"):
                var1 = var1[1:]
                function_body.append("leaq\t{offset}(%rbp), %esi".format(offset=stack_map[var1]))
                source = "%esi"
            else:
                source = "{offset}(%rbp)".format(
                    offset=stack_map[var1]
                    )
            
            if var2.startswith("*"):
                var2 = var2[1:]
                r2 = var_to_register(var2)
                destination = "(%s)" % r2
            else:
                destination = "{offset}(%rbp)   \t# {offset}(%rbp) = {v}".format(
                    offset=stack_map[var2],
                    v=var2
                    )
            
            function_body.append("movl\t{source}, {destination}".format(
                source=source,
                destination=destination
                ))
        elif elements[0] == "OP_INT":
            v0 = elements[2]
            v1, v2 = elements[3:]
            r1 = var_to_register(v1)
            op = operations[elements[1]][0]
            # v0 = v1 op v2 ===> 
            #   op v2, r1 (currently r1 binds to v0)
            #   movl r1, v0
            function_body.append("{op}\t{v2}(%rbp), {r1}   \t# {v2}(%rbp) = {v}".format(
                op=op, 
                v2=stack_map[v2],
                r1=r1,
                v=v2
                ))
            if op == "cmpl":
                function_body.append("{op}\t{r}".format(
                    op=cmpl_operations[elements[1]][0], 
                    r=register_8_map[r1]
                ))
                function_body.append("movzbl\t{lr}, {r}".format(
                    lr=register_8_map[r1],
                    r=r1
                ))
            function_body.append("movl\t{r1}, {v0}(%rbp)   \t# {v0}(%rbp) = {v}".format(
                r1=r1,
                v0=stack_map[v0],
                v=v0
            ))
            register_var[r1] = v0
        elif elements[0] == "OP_DOUBLE":
            pass
        elif elements[0] == "LABEL":
            function_body.append(".L%s" % elements[1])
        elif elements[0] == "IF":
            _, v0, _, label_id = elements
            function_body.append("cmpl\t{v0}(%rbp), $0   \t# {v0}(%rbp) = {v}".format(
                v0=stack_map[v0],
                v=v0
            ))
            function_body.append("jne\t.L{label_id}".format(label_id=label_id))
        elif elements[0] == "GOTO":
            label_id = elements[1]
            function_body.append("jmp\t.L{label_id}".format(label_id=label_id))
        elif elements[0] == "BNE":
            _, v0, v1, label_id = elements
            function_body.append("cmpl\t{v0}(%rbp), {v1}(%rbp)".format(
                v0=stack_map[v0],
                v1=stack_map[v1]
            ))
            function_body.append("jne\t.L{label_id}".format(label_id=label_id))
        elif elements[0] == "RETURN":
            if len(elements) != 1:
                # move data to %eax
                function_body.append("movl\t{v0}(%rbp), %eax   \t# {v0}(%rbp) = {v}".format(
                    v0=stack_map[elements[1]],
                    v=elements[1]
                ))
            function_body.append("jmp\t.{function_name}_end".format(function_name=function_name))
        elif elements[0] == "FUNC_END":
            out += template_function.format(
                function_name=function_name,
                function_section="\n".join(map(lambda x: "\t" + x if not x.startswith(".") else x, function_body))
            )
            function_name = None
            function_body = []
        else:
            raise ValueError("Unknown op: " + elements[0])

with open(asm, "w") as f:
    f.write(out)