#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *tekst2="abcde";
    printf("%Iu\n",sizeof(tekst2));
    printf("%p\n",tekst2);
    printf("%p\n",&tekst2);
    tekst2="WERT";
    printf("%s\n",tekst2);
    tekst2++;
    //tekst2[2]='R';
    printf("%s\n",tekst2);
    return 0;
}
