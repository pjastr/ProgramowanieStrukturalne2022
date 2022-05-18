#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

void dodaj(struct element**Lista, int a)
{
    struct element * wsk = malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=*Lista;
    *Lista= wsk;
};

struct element * utworz()
{
    return NULL;
};

int main()
{
    struct element* l1 = utworz();
    dodaj(&l1,2);
    dodaj(&l1,4);
    dodaj(&l1,7);
    dodaj(&l1,-2);
    struct element * wsk = l1;
    while(wsk!=NULL)
    {
        printf("%d\n",wsk->i);
        wsk=wsk->next;
    }
    return 0;
}
