#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

int main()
{
     struct element * lista = NULL; //tworzymy "pust¹ listê"
     //dodajemy pierwszy element na listê (tu pojêcie koniec czy pocz¹tek nie ma wiêkszego sensu)
     struct element * wsk = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamiêci na jeden z elementów
     wsk->i=-4;
     wsk->next=NULL; //bo nic wiêcej nie ma na liœcie
     lista=wsk; // ustawiamy wskaznik pocz¹tku listy
     // dodajemy nowy element na pocz¹tek
     struct element * wsk2 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamiêci na jeden z elementów
     wsk2->i=7;
     wsk2->next=lista; // nastêpnik nowego elementu to bie¿acy wskaznik listy
     lista=wsk2;  // ustawiamy wskaznik nowego elementy jako pocz¹tek listy
     // dodajemy jeszcze jeden nowy element na pocz¹tek
     struct element * wsk3 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamiêci na jeden z elementów
     wsk3->i=5;
     wsk3->next=lista; // nastêpnik nowego elementu to bie¿acy wskaznik listy
     lista=wsk3;  // ustawiamy wskaznik nowego elementy jako pocz¹tek listy
     //tu ju¿ mamy listê jak na rysunku - pierwszy eleemnt yo 5, drugi to 7, trzeci to i 4
     // teraz dodajemy 11 na pocz¹tek
     struct element * wsk4 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamiêci na jeden z elementów
     wsk4->i=11;
     wsk4->next=lista; // nastêpnik nowego elementu to bie¿acy wskaznik listy
     lista=wsk4;  // ustawiamy wskaznik nowego elementy jako pocz¹tek listy
     return 0;
}
