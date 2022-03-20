#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int *pi = &num;
    printf("Adres pi: %d Wartosc: %d\n",&pi, pi);
    printf("Adres pi: %x Wartosc: %x\n",&pi, pi);
    printf("Adres pi: %o Wartosc: %o\n",&pi, pi);
    printf("Adres pi: %p Wartosc: %p\n",&pi, pi);
    return 0;
}
