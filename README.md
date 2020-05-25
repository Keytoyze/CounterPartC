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