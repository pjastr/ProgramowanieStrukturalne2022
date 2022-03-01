#include <stdio.h>

int a=1; /* zmienna globalna */

int main()
{
    int a=2;         /* to ju¿ zmienna lokalna */
    printf("%d", a); /* wypisze 2 */
    return 0;
}
