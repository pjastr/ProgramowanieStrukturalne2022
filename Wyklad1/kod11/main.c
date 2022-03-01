#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    a = 3;
    b = a--; /* po operacji b=3 a=2 */
    c = --b; /* po operacji b=2 c=2 */
    printf ("%d",sizeof(int));
    return 0;
}
