#include <stdio.h>

int main()
{
    char * napis = "ab6sWR";
    char * kopia;
    kopia=napis;
    printf("%s\n",napis);
    printf("%p\n",napis);
    printf("%p\n",&napis);
    printf("%s\n",kopia);
    printf("%p\n",kopia);
    printf("%p\n",&kopia);
    return 0;
}
