#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * utworz()
{
    return NULL;
};

struct element* wyczysc(struct element *Lista)
{
    struct element * wsk=Lista;
    while(Lista!=NULL)
    {
        Lista=Lista->next;
        free(wsk);
        wsk=Lista;
    }
    return NULL;
}

void wyswietlListeBezGlowy(struct element*Lista)
{
    struct element*temp=Lista;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%d\n",temp->i);
        temp=temp->next;
    }
    printf("----\n");
}

int main()
{
    struct element* example = utworz();
    example=wyczysc(example);
    wyswietlListeBezGlowy(example);
    struct element * lista1 = malloc(sizeof(struct element));
    lista1->i=7;
    lista1->next=malloc(sizeof(struct element));
    lista1->next->i=-3;
    lista1->next->next=malloc(sizeof(struct element));
    lista1->next->next->i=8;
    lista1->next->next->next=NULL;
    wyswietlListeBezGlowy(lista1);
    lista1=wyczysc(lista1);
    wyswietlListeBezGlowy(lista1);
    return 0;
}
