#include <stdio.h>
#include <stdlib.h>

void fun(int (*wsk)(int a, int b), int n)
{
    printf("%d",wsk(n,n));
}

int funkcja(int a, int b)
{
    return 5;
}

int main()
{
    fun(funkcja,60);
    return 0;
}
