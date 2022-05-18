#include <stdio.h>
#include <stdlib.h>

 struct Struktura {
   int pole1;
   double pole2;
   char pole3;
 };

int main()
{
    struct Struktura * wsk;
    struct Struktura zm ={20,3.4,'w'};
    wsk=&zm;
    printf("%d\n",(*wsk).pole1);
    printf("%d\n",wsk->pole1);
    printf("%lf\n",wsk->pole2);
    return 0;
}
