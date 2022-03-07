#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int n = 0; n < 10; ++n, printf("%d\n", n))
    ; // null statement
    return 0;
}
