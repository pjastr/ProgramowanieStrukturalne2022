void foo3(int tab[][3])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("[%d,%d]=%d ",i,j,tab[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int tab[2][3] = {{1,2,4},{-2,3,5}};
    foo3(tab);
    return 0;
}
