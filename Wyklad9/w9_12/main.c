#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char n1[20];
    char n2[]="informatyka";
    char * n3=strcpy(n1,n2);
    printf("%p\n",n1);
    printf("%p\n",n2);
    printf("%p\n",n3);
    return 0;
}
