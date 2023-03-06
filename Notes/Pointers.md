# Pointers
- Variables that store memory address of other variables.

#### Example
```c
int a;
int *p;

char c;
char *p0;

double d;
double *p1;

p = &a; 
a = 8; 
// in this case:
*p => 8 (dereference)
p => address (ex: 0x7ffee2327b9c)
&a => address in memory of a
&p address of pointer 
*p = 6; > modify the value at pointed variable.
```
Look at <a href="./PointerDemo.c"> Demo Examples</a>



