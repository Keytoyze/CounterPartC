# CounterPart of C

## Build AST
```bash
cd buildSrc
python GenerateAST.py
```

## Compile
```bash
mkdir cmake-build-debug
cd cmake-build-debug
cmake ../
make
```

## Usage
```
cpc input.c
    [-Ocf]
    [-Ouc]
    [-ast ast_path.html] 
    [-ir ir_path.txt]
    [-o out.asm]
```

## TODO

### Parser
- [X] Lexical analysis
- [X] Syntax analysis

### Semantic analysis
- [X] Algebraic operation: `&, |, +, -, *, /, %, <<, >>, <, >, <=, >=, ==, !=, &&, ||, ^`
- [X] Selection statement: `if, if-else, switch`
- [X] Iteration statement: `while, do-while, for`
- [X] Jump statement: `goto`
- [X] Function call & function definition
- [X] Variable initialization & definition
- [ ] Conditional expression: ` ? : `
- [X] Array initialization & operation
- [ ] Enum
- [ ] String literal
- [ ] Struct
- [ ] Type cast: `(int) a`
- [X] Pointer
- [ ] Type quailifier: `const volatile`
- [X] `sizeof(exp)`

### Code generation
- [X] IR
- [ ] Code optimization
    - [X] const expression in if statement
    - [X] remove unused variables
    - [ ] temp variable in pointer assignment
    - [ ] ...
- [X] Target code

### Others
- [X] AST visualization
- [X] Command line argument