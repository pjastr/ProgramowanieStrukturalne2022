#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    const int *a=&i;
    int * const b=&i;
    int const * const c=&i;
    //*a = 1;  /* kompilator zaprotestuje */
    *b = 2;  /* ok */
    //*c = 3;   /* kompilator zaprotestuje */
    a = b;   /* ok */
    //b = a;   /* kompilator zaprotestuje */
    //c = a;   /* kompilator zaprotestuje */
    return 0;
}
