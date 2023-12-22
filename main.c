#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *i = malloc(sizeof(int)*2);
    i[0] = 5;
    i[1] = 10;
    
    printf("int: %d, %d, %p, %p\n", i[0], i[1], &i[0], &i[1]);
    
    long *l = malloc(sizeof(int)*2);
    l[0] = 15;
    l[1] = 20;

    printf("long: %ld, %ld, %p, %p\n", l[0], l[1], &l[0], &l[1]);

    float *f = malloc(sizeof(float)*2);
    f[0] = 25.505555;
    f[1] = 30.505155;
    
    printf("float: %f, %f, %p, %p\n", f[0], f[1], &f[0], &f[1]);

    double *d = malloc(sizeof(double)*2);
    d[0] = 25.505555;
    d[1] = 30.505155;

    printf("double: %f, %f, %p, %p\n", d[0], d[1], &d[0], &d[1]);
    
    char *c = malloc(sizeof(char)*2);
    c[0] = 'a';
    c[1] = 'b';
    
    printf("char: %c, %c, %p, %p\n", c[0], c[1], &c[0], &c[1]);
    
    void *v = malloc(sizeof(int)*2);
    ((int*)v)[0] = 5;
    ((int*)v)[1] = 10;

    printf("void: %d, %d, %p, %p\n", ((int*)v)[0], ((int*)v)[1], &v[0], &v[1]);

    free(i);
    free(l);
    free(f);
    free(d);
    free(c);
    free(v);
}
        
