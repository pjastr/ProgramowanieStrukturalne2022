#include <stdio.h>

int main(void)
{
    printf("%Iu\n",sizeof(short));
    short tab[4]={1,-3,4,7};
    short *wsk1, *wsk2;
    wsk1=tab;
    wsk2=wsk1+3;
    printf("%p %p\n",wsk1,wsk2);
    printf("%d %d\n",*wsk1,*wsk2);
    return 0;
}
