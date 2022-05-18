#include <stdio.h>
#include <stdlib.h>

 struct Struktura {
   int pole1;
   double pole2;
   char pole3;
 };

int main()
{
    struct Struktura zm ={-20,3.4,'w'};
    printf("%d\n",abs(zm.pole1));
    return 0;
}
