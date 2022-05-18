#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element* dodaj(struct element*Lista, int a)
{
    struct element * wsk = malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista;
    return wsk;
};

struct element * utworz()
{
    return NULL;
};

int main()
{
    struct element* l1 = utworz();
    l1 = dodaj(l1,2);
    l1 = dodaj(l1,4);
    l1 = dodaj(l1,55);
    l1 = dodaj(l1,7);
    l1 = dodaj(l1,-2);
    struct element * wsk = l1;
    while(wsk!=NULL)
    {
        printf("%d\n",wsk->i);
        wsk=wsk->next;
    }
    return 0;
}
