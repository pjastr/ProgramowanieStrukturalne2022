#include <stdio.h>
#include <stdlib.h>

 struct Struktura {
   int pole1;
   double pole2;
   char pole3;
 };

int main()
{
    struct Struktura tabS[5];
    struct Struktura zm;
    tabS[1] = zm;
}
