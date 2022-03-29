#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 3

int suma(int tab[], int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp+=tab[i];
    }
    return temp;
}

int main()
{
    int tablica[5]={1,0,2,0,3};
    printf("%d\n",suma(tablica,5));
    int n= 4;
    int tablica2[n];
    tablica2[0]=2;
    tablica2[1]=3;
    tablica2[2]=4;
    tablica2[3]=5;
    printf("%d\n",suma(tablica2,n));
    int tablica3[ROZMIAR] = {1,-2,5};
    printf("%d\n",suma(tablica3,ROZMIAR));
    return 0;
}
