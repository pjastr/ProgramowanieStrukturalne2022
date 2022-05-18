#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

int main()
{
     //tworzymy g³owê
     struct element * lista = malloc(sizeof(struct element));
     //pola i glowy nie ustawiamy
     lista->next= NULL; //nastêpnik glowy jest na NULL, mamy zatem w tym miejscu pust¹ listê z g³ow¹
     //dodajemy pierwszy element na listê - w liscie z g³ow¹ musimy go postawiæ po g³owie
     struct element * wsk = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamiêci na jeden z elementów
     wsk->i=-4;
     wsk->next=lista->next; //tutaj teoretycznie mo¿na ustawiæ na NULL, ale zgodnie z konwencj¹ trzeba ustawiæ pole next g³owy
     lista->next=wsk; // ustawiamy nastepnik glowy jako wskaznik na nowy element
     // dodajemy nowy element na pocz¹tek
     struct element * wsk2 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamiêci na jeden z elementów
     wsk2->i=7;
     wsk2->next=lista->next; // nastêpnik nowego elementu to nastepnik "g³owy"
     lista->next=wsk2;  // ustawiamy nastêpnik g³owy jako wskaŸnik na nowy element
     // dodajemy jeszcze jeden nowy element na pocz¹tek
     struct element * wsk3 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamiêci na jeden z elementów
     wsk3->i=5;
     wsk3->next=lista->next; // nastêpnik nowego elementu to nastepnik "g³owy"
     lista->next=wsk3;  // ustawiamy nastêpnik g³owy jako wskaŸnik na nowy element
     //tu ju¿ mamy listê jak na rysunku - "g³owa", pierwszy eleemnt to 5, drugi to 7, trzeci to i 4
     // teraz dodajemy 11 na pocz¹tek
     struct element * wsk4 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pamiêci na jeden z elementów
     wsk4->i=11;
     wsk4->next=lista->next; // nastêpnik nowego elementu to nastepnik "g³owy"
     lista->next=wsk4;  // ustawiamy nastêpnik g³owy jako wskaŸnik na nowy element
     return 0;
}
