#include <stdio.h>
#include <stdlib.h>

 struct Struktura {
   int pole1;
   int pole2;
 };

struct Struktura foo(struct Struktura zm)
{
    zm.pole1=43;
    return zm;
}

int main()
{
    struct Struktura zm = {4,5};
    zm=foo(zm);
    printf("%d",zm.pole1);
    return 0;
}
