#include <stdio.h>
#include <stdlib.h>

 struct Struktura {
   int pole1;
   int pole2;
   char pole3;
 };

 struct moja_struct {
    int a;
    char b;
    } moja = {1,'c'};


int main()
{
    struct Struktura zmiennaS = {60, 2, 'a'};
    moja.a=4;
}
