#include <stdio.h>

int main(void)
{
    printf("%Iu\n",sizeof(double));
    double tab[4]={1.2,-3.3,4.3,7.7};
    double *wsk1, *wsk2;
    wsk1=tab;
    wsk2=wsk1+3;
    printf("%p %p\n",wsk1,wsk2);
    printf("%lf %lf\n",*wsk1,*wsk2);
    return 0;
}
