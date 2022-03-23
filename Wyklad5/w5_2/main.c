#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5,b=7;
    printf("%d %d\n",a,b);
    {
        int temp=a;
        a=b;
        b=temp;
    }
    printf("%d %d\n",a,b);
    return 0;
}
