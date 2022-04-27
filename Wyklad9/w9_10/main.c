#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tekst1[10]="abcde";
    printf("%Iu\n",sizeof(tekst1));
    printf("%p\n",tekst1);
    printf("%p\n",&tekst1);
    //tekst1="eee";
    //tekst1++;
    tekst1[2]='R';
    printf("%s\n",tekst1);
    return 0;
}
