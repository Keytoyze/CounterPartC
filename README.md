# CounterPart of C

## Build
```bash
cd buildSrc
python GenerateAST.py
cd ..
mkdir cmake-build-debug
cd cmake-build-debug
cmake ../
make
```

## Usage
```
cpc [file]
```