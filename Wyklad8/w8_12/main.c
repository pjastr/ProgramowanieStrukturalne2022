#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b=4.5;
    printf("%a\n",b);
    printf("%A\n",b);
    int a=87;
    char c='r';
    printf("%c %c\n",a,c);
    printf("%d\n",a);
    printf("%e\n",b);
    printf("%E\n",b);
    printf("%f\n",b);
    float d=0.00000123;
    float e=2.3;
    printf("%g %g\n",d,e);
    printf("%G %G\n",d,e);
    printf("%i\n",a);
    printf("%o\n",a);
    printf("%p\n",&a);
    char f[10]="qwerty";
    printf("%s\n",f);
    printf("%u\n",a);
    int g=-5;
    printf("%u\n",g);
    printf("%x\n",108);
    printf("%X",108);
    return 0;
}
