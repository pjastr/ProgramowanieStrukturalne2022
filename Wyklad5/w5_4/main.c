#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * wsk = malloc(3*sizeof(int));
    printf("%p\n",wsk);
    printf("%Iu\n",_msize(wsk));
    free(wsk);
    printf("%p\n",wsk);
    return 0;
}
