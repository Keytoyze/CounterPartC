import os

def scanVar(input):
    var = {}
    for line in input:
        line = line.replace('\n', '')
        tokens = line.split(' ')
        if (len(tokens) >= 3):
            # possible assign or malloc
            if 'ASSIGN_CONST' in tokens[0]:
                if 'var' not in tokens[2]:
                    # it's currently const
                    var[tokens[1]]['isConst'] = True
                else: 
                    var[tokens[1]]['isConst'] = False
                    var[toknes[2]]['used'] = True
            elif 'MALLOC_CONST' in tokens[0]:
                var[tokens[1]] = {'used':False}
                var[tokens[1]]['isConst'] = False
                # var[tokens[1]]['pos'] = input.tell()
            elif 'OP' in tokens[0]:
                var[tokens[2]]['used'] = False
                var[tokens[3]]['used'] = True
                var[tokens[4]]['used'] = True
    return var

def removeUnusedVar(input, output):
    var = scanVar(input)
    print(var)
    input.seek(0)
    for line in input:
        line = line.replace('\n', '')
        tokens = line.split(' ')
        if (len(tokens) >= 3):
            # possible assign or malloc
            if 'ASSIGN_CONST' in tokens[0]:
                if var[tokens[1]]['used'] is False:
                    continue
            elif 'MALLOC_CONST' in tokens[0]:
                if var[tokens[1]]['used'] is False:
                    continue
            elif 'OP' in tokens[0]:
                if var[tokens[2]]['used'] is False:
                    continue
        output.write(line + '\n')


with open('test.ir', 'r') as input :
    with open('output.ir', 'w+') as output:
        removeUnusedVar(input, output)

