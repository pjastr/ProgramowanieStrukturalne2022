#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * utworz()
{
    struct element * wskaznik = malloc(sizeof(struct element));
    wskaznik->next=NULL;
    return wskaznik;
};

void dodaj(struct element*Lista, int a)
{
    struct element * wsk = malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista->next;
    Lista->next=wsk;
};

int main()
{
    struct element* l1 = utworz();
    dodaj(l1,2);
    dodaj(l1,4);
    dodaj(l1,-8);
    dodaj(l1,-22);
    struct element * wsk = l1;
    while(wsk->next!=NULL)
    {
        wsk=wsk->next;
        printf("%d\n",wsk->i);
    }
    return 0;
}
