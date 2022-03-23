#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 5

int main()
{
    int tab[ROZMIAR] = {[2] = 34};
    for(int i=0;i<ROZMIAR;i++)
    {
        printf("%d\n",tab[i]);
    }
    return 0;
}
