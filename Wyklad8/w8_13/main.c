#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=442;
    printf("%d\n",a);
    printf("% d\n",a);
    printf("%2d\n",a);
    printf("%7d\n",a);
    printf("%7.2d\n",a);
    printf("%07d\n",a);
    printf("%07.2d\n",a);
    printf("%-8daa\n",a);
    int b=-345;
    printf("%d\n",b);
    printf("% d\n",b);
    printf("%2d\n",b);
    printf("%7d\n",b);
    printf("%7.2d\n",b);
    printf("%07d\n",b);
    printf("%07.2d\n",b);
    printf("%-8d\n",b);
    int c=7;
    printf("%d\n",c);
    printf("% d\n",c);
    printf("%2d\n",c);
    printf("%7d\n",c);
    printf("%7.2d\n",c);
    printf("%07d\n",c);
    printf("%07.2d\n",c);
    printf("%-8d\n",c);
    return 0;
}
