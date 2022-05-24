#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

void wyczysc(struct element * Lista)
{
    struct element * wsk=Lista->next;
    struct element * wsk2=Lista;
    Lista=wsk;
    while(Lista!=NULL)
    {
        Lista=Lista->next;
        free(wsk);
        wsk=Lista;
    }
    wsk2->next=NULL; //tego brak w odpowiedziach
}

void wyswietlListeZGlowa(struct element*Lista)
{
    struct element*temp=Lista->next;
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
    struct element* l1=malloc(sizeof(struct element));
    l1->next=malloc(sizeof(struct element));
    l1->next->i=5;
    l1->next->next=malloc(sizeof(struct element));
    l1->next->next->i=7;
    l1->next->next->next=malloc(sizeof(struct element));
    l1->next->next->next->i=-2;
    l1->next->next->next->next=NULL;
    wyswietlListeZGlowa(l1);
    wyczysc(l1);
    wyswietlListeZGlowa(l1);
    return 0;
}
