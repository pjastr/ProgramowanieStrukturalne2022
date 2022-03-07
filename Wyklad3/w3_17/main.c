#include <stdio.h>
#include <stdlib.h>

void foo10(int a)
{
    a+=5;
    printf("a%d\n",a);
}

int main()
{
    int a = 7;
    printf("b%d\n",a);
    foo10(a);
    printf("c%d\n",a);
    return 0;
}
