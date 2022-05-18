#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[3][2] = {{2,-3},{5,4},{8,7}};
    //wskaznik do tablicy dwóch wartosci int
    //operator [] ma wyzszy priorytet niz *
    int (*wsk)[2];
    wsk=tab;
    printf("%d %p %p\n",**wsk,*wsk,wsk);
    printf("%d %p %p\n",**(wsk+1),*(wsk+1),wsk+1);
    printf("%d %p\n",*(wsk[0]),wsk[0]);
    printf("%d %p\n",*(wsk[1]),wsk[1]);
    printf("%d %p\n",*(wsk[2]),wsk[2]);
    printf("%d %p\n",*(wsk[1]+1),wsk[1]+1);
    printf("%d %p\n",*(*wsk+1),*wsk+1);
    printf("%d\n",*wsk[1]);
    printf("%d\n",**wsk+1);
    printf("%d\n",wsk[2][1]);
    printf("%d\n",*(*(wsk+2)+1));
    return 0;
}
