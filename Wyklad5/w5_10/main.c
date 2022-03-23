#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 2

int main()
{
    int tab[ROZMIAR] ={2,3,-2,0};
    for(int i=0;i<ROZMIAR+2;i++)
    {
        printf("%d\n",tab[i]);
    }
    return 0;
}
