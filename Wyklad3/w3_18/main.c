#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
    if (n ==0)
    {
        return 1;
    }
    return n* silnia(n-1);
}

int main()
{
    int a = 5;
    printf("%d\n",silnia(a));
    return 0;
}
