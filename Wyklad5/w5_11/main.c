#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[] ={2,3,-2,0};
    for(int i=0;i<sizeof tab/sizeof(int);i++)
    {
        printf("%d\n",tab[i]);
    }
    return 0;
}
