#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x;
    int num=45;
    int *pi = &num;
    printf("%p\n",pi);
    printf("%d\n",*pi);
    printf("%p\n",&pi);
    return 0;
}
