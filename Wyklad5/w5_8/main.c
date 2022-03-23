#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 3

int main()
{
    int tab[ROZMIAR]={4,-8,9};
    for(int i=-2;i<ROZMIAR;i++)
    {
        printf("%d\n",tab[i]);
    }
    return 0;
}
