#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =0;
    while (i<5)
    {
        printf("%d\n",i);
        if (i>2)
        {
            break;
        }
        i++;
    }
    return 0;
}
