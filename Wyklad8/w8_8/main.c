#include <stdio.h>

int main()
{
    char tekst1[]="abc";
    char tekst2[]= {'a','b','c'};
    char tekst3[]="xyz";
    fputs(tekst1,stdout);
    fputs(tekst2,stdout);
    fputs(tekst3,stdout);
    return 0;
}
