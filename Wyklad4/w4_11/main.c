#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%Iu\n",sizeof(int)); //Windows
    //printf("%zu\n",sizeof(int)); //linux, os x
    printf("%Iu\n",sizeof(int*));
    printf("%Iu\n",sizeof(int**));
    return 0;
}
