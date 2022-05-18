#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*2);
    *tab=(int*) malloc(sizeof(int)*3);
    *(tab+1)=(int*) malloc(sizeof(int)*3);
    *(*(tab+0)+0)= 2;
    *(*(tab+0)+1)= 3;
    *(*(tab+0)+2)= 5;
    *(*(tab+1)+0)= -2;
    *(*(tab+1)+1)= 4;
    *(*(tab+1)+2)= 8;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++ )
        {
            printf("[%d,%d]=%d,adres %p\n",i,j,tab[i][j],&tab[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        printf("w: [%d]=%p,adres %p\n",i,tab[i],&tab[i]);
    }
    printf("%Iu\n",sizeof(int));
    printf("%Iu\n",sizeof(int*));
    printf("%Iu\n",sizeof(int**));
    return 0;
}
