#include <stdio.h>
#include <stdlib.h>
union Liczba
{
    int a;
    float b;
};
struct Dane
{
    int tp;
    union Liczba zaw;
};
struct Dane wczytaj()
{
    struct Dane temp;
    printf("Jesli chcesz wpisac liczbe calk to wpisz 0,a jesli wymierna to wpisz 1\n");
    scanf("%d", &temp.tp);
    if (temp.tp ==0)
    {
        scanf("%d", &temp.zaw.a);
    }
    else
    {
        scanf("%f", &temp.zaw.b);
    }
    return temp;
};
void wyswietl(struct Dane arg)
{
    if (arg.tp ==0)
    {
        printf("%d\n", arg.zaw.a);
    }
    else
    {
        printf("%f\n", arg.zaw.b);
    }
}
int main()
{
    union Liczba zm;
    zm.a =5;
    printf("%d\n", zm.a);
    printf("%f\n", zm.b);
    zm.b=3.4;
    printf("%d\n", zm.a);
    printf("%f\n", zm.b);
    struct Dane dane1;
    dane1= wczytaj();
    wyswietl(dane1);
    return 0;
}
