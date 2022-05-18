#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[2][3] = {{1,2,4},{-2,3,5}};
    printf("%p\n",&tab[0][0]);
    printf("%p\n",&tab[0][1]);
    printf("%p\n",&tab[0][2]);
    printf("%p\n",&tab[0][3]);
    printf("%p\n",&tab[1][0]);
    printf("%p\n",&tab[1][1]);
    printf("%p\n",&tab[1][2]);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++ )
        {
            printf("%d\n",tab[i][j]);
        }
    }
    for(int i=0;i<2*3;i++)
    {
        printf("%d\n",tab[0][i]);
    }
    return 0;
}
