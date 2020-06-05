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
cpc [file]
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
- [ ] Array initialization & operation
- [ ] Enum
- [ ] String literal
- [ ] Struct
- [ ] Type cast: `(int) a`
- [ ] Pointer
- [ ] Type quailifier: `const volatile`

### Code generation
- [X] IR
- [ ] Code optimization
- [ ] Target code

### Others
- [X] AST visualization
- [ ] Command line argument