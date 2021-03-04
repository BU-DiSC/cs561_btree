# cs561_btree

## Compilation

To compile, assuming your main testing file is called "analysis.cpp", use the following:

```c
g++ -g -std=c++11 betree.h analysis.cpp -o analysis.o 
```

Additionally, to compile as a B+-tree, use the pre-processor flag "-DBPLUS". To include timers, use the pre-processor flag "-DTIMER" and for profiling use "-DPROFILE" while compiling. 

