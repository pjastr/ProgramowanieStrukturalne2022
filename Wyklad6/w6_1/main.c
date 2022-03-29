#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 3

int main()
{
    int tab[ROZMIAR] = {4,7,11};
    printf("%i\n",tab==&tab[0]);
    printf("%p\n",tab);
    printf("%p\n",&tab);
    printf("%p\n",&tab[0]);
    printf("%d\n",*tab);
    printf("%d\n",tab[0]);
    printf("%i\n",*tab==tab[0]);
    printf("%p\n",tab+1);
    printf("%p\n",&tab[1]);
    printf("%d\n",*(tab+1));
    printf("%d\n",tab[1]);
    printf("%d\n",*tab+1);
    return 0;
}
