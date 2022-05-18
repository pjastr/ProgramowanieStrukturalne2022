#include <stdio.h>
#include <stdlib.h>

int suma(int n, int m, int tab[][m])
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            temp+=tab[i][j];
        }
    }
    return temp;
}

int main()
{
    int tab[2][4] = {{2,3,4,5},{-3,4,1,2}};
    printf("%d\n",suma(2,4,tab));
    return 0;
}
