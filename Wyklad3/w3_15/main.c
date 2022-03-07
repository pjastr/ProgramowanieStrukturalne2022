#include <stdio.h>
#include <stdlib.h>

int foo1()
{
    return 62;
}

int foo2(int a)
{
    return a+4;
}

float foo3(int a, int b)
{
    return (b+a)/3.0;
}



int main()
{
    printf("%d\n",foo1());
    printf("%d\n",foo2(8));
    printf("%f\n",foo3(2,2));
    return 0;
}
