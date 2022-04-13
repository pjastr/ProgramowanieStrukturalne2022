#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[20];
    int a=5;
    int b=7;
    sprintf(buffer,"%5d+%5d=%5d",a,b,a+b);
    printf("%s",buffer);
    return 0;
}
