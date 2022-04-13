#include <stdio.h>

int main()
{
    char slowo[10];
    fgets(slowo,10,stdin);
    printf("%s\n",slowo);
    puts(slowo);
    fputs(slowo,stdout);
    return 0;
}
