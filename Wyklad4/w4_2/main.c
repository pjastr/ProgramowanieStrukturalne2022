#include <stdio.h>

 int main ()
 {
   int liczba = 5;
   printf("Warto�� zmiennej: %d\n", liczba );
   printf("Adres zmiennej: %p\n", &liczba );
   printf("Adres zmiennej: %#010x\n", &liczba );
   printf("Adres zmiennej: %d\n", &liczba );
   return 0;
 }
