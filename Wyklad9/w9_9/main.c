#include <stdio.h>
#include <stdlib.h>

char* foo()
{
    char temp[10];
    temp[0]='w';
    temp[1]='$';
    temp[2]='a';
    temp[3]='\0';
    return temp;
}

int main()
{
    printf("%p\n",foo());
    return 0;
}
