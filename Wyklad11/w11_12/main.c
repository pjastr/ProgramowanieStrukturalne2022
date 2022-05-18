#include <stdio.h>
#include <stdlib.h>

 struct Struktura {
   int pole1;
   int pole2;
 };

int suma(struct Struktura zm)
{
    return (zm.pole1+zm.pole2);
}

int main()
{
    struct Struktura zm = {4,5};
    int w= suma(zm);
    printf("%d",w);
    return 0;
}
