#include <stdio.h>
#include <stdlib.h>

int suma(int n, int m, int** tab)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            temp+=*(*(tab+i)+j);
        }
    }
    return temp;
}

int main()
{
    int **tab = (int**) malloc(sizeof(int*)*2);
    *tab=(int*) malloc(sizeof(int)*4);
    *(tab+1)=(int*) malloc(sizeof(int)*4);
    *(*(tab+0)+0)= 2;
    *(*(tab+0)+1)= 3;
    *(*(tab+0)+2)= 4;
    *(*(tab+0)+3)= 5;
    *(*(tab+1)+0)= -3;
    *(*(tab+1)+1)= 4;
    *(*(tab+1)+2)= 1;
    *(*(tab+1)+3)= 2;
    printf("%d\n",suma(2,4,tab));
    return 0;
}
