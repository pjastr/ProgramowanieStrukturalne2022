#include <stdio.h>
#include <stdlib.h>

int suma(int n, int *tab)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp+=*(tab+i);
    }
    return temp;
}

int main()
{
    int * tablica=malloc(5*sizeof(int));
    tablica[0]=1;
    tablica[1]=0;
    tablica[2]=2;
    tablica[3]=0;
    tablica[4]=3;
    printf("%d\n",suma(5,tablica));
    return 0;
}
