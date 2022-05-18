#include <stdio.h>
#include <stdlib.h>

struct Test{
    int p1;
    char p2;
    //double p3; //porównac po odkomentowaniu poczatku linijki
};

int main()
{
    struct Test a={22,'w'};
    printf("%d\n",a); //unexptected
    printf("%p\n",&a); // adres struktury/pierwszego pola
    printf("%p\n",&a.p1); //adres pierwszego pola
    //printf("%p\n",(&a).p1); //blad kompilacji
    printf("%p\n",&a.p2); //adres drugiego pola
    //printf("%d\n",*a); //brak kompilacji
    printf("%d\n",*(&a)); //unexptected
    printf("%d\n",a.p1); //wartosc pierwszego pola
    printf("%c\n",a.p2); //wartosc drugiego pola pola
    return 0;
}
