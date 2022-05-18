#include <stdio.h>
#include <stdlib.h>

 struct Struktura {
   int pole1;
   int pole2;
   char pole3;
 };

int main()
{
    struct Struktura zmiennaS =
        { .pole2=60, .pole1=2, .pole3='a'};
}
