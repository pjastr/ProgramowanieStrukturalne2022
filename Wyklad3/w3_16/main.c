#include <stdio.h>
#include <stdlib.h>

void foo4()
{
    printf("abc");
}

void foo5(int a)
{
    printf("%d",a*8);
}


int main()
{
    foo4();
    foo5(5);
    return 0;
}
