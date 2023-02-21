# cpp-odr-violation-types-example

Simple example how ODR violation happend for types.

## Build
```
g++ -c a.cpp
g++ -c b.cpp
g++ -c main.cpp
g++ *.o -o main
```

## Run
`./main`

## Possible result
```
42
42
*** stack smashing detected ***: terminated
Aborted (core dumped)
```
