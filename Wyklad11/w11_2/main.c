#include <stdio.h>
#include <stdlib.h>

int main()
{
    //tablica dwoch wskazników do int
    int *wsk[2]= {
    (int[]) {3,4,5,1},
    (int[]) {-2,3,-4},
    };
    printf("%d %p\n",wsk[0][0],&wsk[0][0]);
    printf("%d %p\n",wsk[0][1],&wsk[0][1]);
    printf("%d %p\n",wsk[0][2],&wsk[0][2]);
    printf("%d %p\n",wsk[0][3],&wsk[0][3]);
    printf("%d %p\n",wsk[1][0],&wsk[1][0]);
    printf("%d %p\n",*(*(wsk+1)+2),*(wsk+1)+2);
    return 0;
}
