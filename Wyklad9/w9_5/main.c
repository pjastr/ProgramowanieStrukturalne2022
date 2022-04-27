#include <stdio.h>
#include <stdlib.h>

int dlugosc(char*napis)
{
    int temp=0;
    while(*(napis++))
    {
        temp++;
    }
    return temp;
}

int dlugosc2(char napis[])
{
    int temp=0;
    for(int i=0;napis[i]!='\0';i++)
    {
        temp++;
    }
    return temp;
}

int dlugosc3(char napis[])
{
    if (napis[0]==0)
        return 0;
    return 1+dlugosc3(++napis);
}




int main()
{
    char n1[]="XY\tZ";
    printf("%s\n",n1);
    printf("%d\n",dlugosc3(n1));
    return 0;
}
