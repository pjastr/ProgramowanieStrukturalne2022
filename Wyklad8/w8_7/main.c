#include <stdio.h>

int main()
{
    char tekst1[]="abc";
    char tekst2[]= {'a','b','c'};
    char tekst3[]="xyz";
    printf("%p\n",tekst1);
    printf("%p\n",tekst2);
    printf("%p\n",tekst3);
    puts(tekst1);
    puts(tekst2);
    puts(tekst3);
    return 0;
}
