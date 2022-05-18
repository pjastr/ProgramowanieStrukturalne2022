#include <stdio.h>
#include <stdlib.h>

 struct Struktura {
   int pole;
 };

int foo(int n,struct Struktura tab[])
{
    int temp=tab[0].pole;
    for(int i=1;i<n;i++)
    {
        if (temp>tab[i].pole)
            temp=tab[i].pole;
    }
    return temp;
}

int main()
{
    struct Struktura zm1 = {4};
    struct Struktura zm2 = {-3};
    struct Struktura zm3 = {11};
    struct Struktura tablica[]={zm1,zm2,zm3};
    printf("%d\n",foo(3,tablica));
    struct Struktura tablica2[]={{4},{3},{9}};
    printf("%d\n",foo(3,tablica2));
    return 0;
}
