#include <stdio.h>
int main(void)
{
    int tab[4]={1,-3,4,7};
    int *wsk1, *wsk2;
    wsk1=tab;
    wsk2=&tab[3];
    //printf("%d\n",wsk2+wsk1);
    return 0;
}
