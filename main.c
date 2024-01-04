// Includes libs
#include <stdio.h>
#include <stdlib.h>

// main function
int main()
{
    // creates a pointer that points to int
    // the pointer points to the return value of malloc whitch is a pointer
    // sizeof(int)*2 takes size of int, and multiplies by 2
    int *i = malloc(sizeof(int)*2);
    // ofsets *i by [0] and sets it to 5
    i[0] = 5;
    // ofsets *i by [1] and sets it to 10
    i[1] = 10;
    
    // prints i[0] and i[1], and the pointer to the place in memory
    printf("int: %d, %d, %p, %p\n", i[0], i[1], &i[0], &i[1]);
   

    //same applies here 
    long *l = malloc(sizeof(int)*2);
    l[0] = 15;
    l[1] = 20;

    printf("long: %ld, %ld, %p, %p\n", l[0], l[1], &l[0], &l[1]);

    //same applies here 
    float *f = malloc(sizeof(float)*2);
    f[0] = 25.505555;
    f[1] = 30.505155;
    
    printf("float: %f, %f, %p, %p\n", f[0], f[1], &f[0], &f[1]);

    //same applies here 
    double *d = malloc(sizeof(double)*2);
    d[0] = 25.505555;
    d[1] = 30.505155;

    printf("double: %f, %f, %p, %p\n", d[0], d[1], &d[0], &d[1]);
    
    //same applies here 
    char *c = malloc(sizeof(char)*2);
    c[0] = 'a';
    c[1] = 'b';
    
    printf("char: %c, %c, %p, %p\n", c[0], c[1], &c[0], &c[1]);
    
    //same applies here 
    void *v = malloc(sizeof(int)*2);
    // but here, it casts the void type to int to write it
    ((int*)v)[0] = 5;
    ((int*)v)[1] = 10;

    // same thing here but to type it
    printf("void: %d, %d, %p, %p\n", ((int*)v)[0], ((int*)v)[1], &v[0], &v[1]);


    // frees the memory
    free(i);
    free(l);
    free(f);
    free(d);
    free(c);
    free(v);
}
        
