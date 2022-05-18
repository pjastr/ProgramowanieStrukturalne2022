#include <stdio.h>
#include <stdlib.h>

int main()
{
    int**tabD = malloc(4*sizeof(int*));
    for(int i=0;i<4;i++)  // for(int i=0;i<4;i++)
    {
        *(tabD+i) = malloc(5*sizeof(int)); // tabD[i] = malloc(5*sizeof(int));
    }
    *(*(tabD+2)+3) = 111;   // tabD[2][3] = 111;
    //zamiana miejscami wierszy o indeksach 1 i 3
    int* wsk_pom;
    wsk_pom = *(tabD +1); // wsk_pom = tabD[0];
    *(tabD + 1) = *(tabD + 3); // tabD[0] = tabD[3];
    *(tabD + 3) = wsk_pom; // tabD[3] = wsk_pom;
    return 0;
}
