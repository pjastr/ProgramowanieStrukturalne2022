#include <stdio.h>
#include <stdlib.h>

int suma(int tab[])
{
    int temp=0;
    for(int i=0;i<sizeof tab/sizeof(int);i++)
    {
        temp+=tab[i];
    }
    return temp;
}

int main()
{
    int tablica[5]={1,0,2,0,3};
    printf("%d\n",suma(tablica));
    return 0;
}
