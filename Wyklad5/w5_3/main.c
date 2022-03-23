#include <stdio.h>
#include <stdlib.h>

void zamiana(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a=5,b=7;
    printf("%d %d\n",a,b);
    zamiana(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}
