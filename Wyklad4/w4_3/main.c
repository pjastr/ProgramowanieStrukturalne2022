#include <stdio.h>

void idzPrawoDol(int x, int y)
{
    x=x+1;
    y=y-1;
}

int main()
{
    int x=20, y=15;
    idzPrawoDol(x,y);
    printf("Aktualna pozycja: [ %d, %d ] \n",x,y);
    return 0;
}
