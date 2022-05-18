#include <stdio.h>
#include <stdlib.h>

union Unia {
   int pole1;
   char pole2;
 };

int main()
{
    union Unia zm;
    zm.pole1=1000;
    printf("%c\n",zm.pole1);
    printf("%d\n",zm.pole1);
    printf("%c\n",zm.pole2);
    printf("%d\n",zm.pole2);
    return 0;
}
