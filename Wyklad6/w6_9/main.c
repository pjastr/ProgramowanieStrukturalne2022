#include <stdio.h>

int main(void)
{
    int tab[4]={1,-3,4,7};
    int *wsk1, *wsk2;
    wsk1=tab;
    wsk2=wsk1+3;
    printf("%p %p\n",wsk1,wsk2);
    printf("%d %d\n",*wsk1,*wsk2);
    return 0;
}
