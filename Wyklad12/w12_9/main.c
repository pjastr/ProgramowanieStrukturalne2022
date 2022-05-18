#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

int main()
{
     //tworzymy g�ow�
     struct element * lista = malloc(sizeof(struct element));
     //pola i glowy nie ustawiamy
     lista->next= NULL; //nast�pnik glowy jest na NULL, mamy zatem w tym miejscu pust� list� z g�ow�
     //dodajemy pierwszy element na list� - w liscie z g�ow� musimy go postawi� po g�owie
     struct element * wsk = malloc(sizeof(struct element)); // rezerwujemy miejsce w pami�ci na jeden z element�w
     wsk->i=-4;
     wsk->next=lista->next; //tutaj teoretycznie mo�na ustawi� na NULL, ale zgodnie z konwencj� trzeba ustawi� pole next g�owy
     lista->next=wsk; // ustawiamy nastepnik glowy jako wskaznik na nowy element
     // dodajemy nowy element na pocz�tek
     struct element * wsk2 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pami�ci na jeden z element�w
     wsk2->i=7;
     wsk2->next=lista->next; // nast�pnik nowego elementu to nastepnik "g�owy"
     lista->next=wsk2;  // ustawiamy nast�pnik g�owy jako wska�nik na nowy element
     // dodajemy jeszcze jeden nowy element na pocz�tek
     struct element * wsk3 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pami�ci na jeden z element�w
     wsk3->i=5;
     wsk3->next=lista->next; // nast�pnik nowego elementu to nastepnik "g�owy"
     lista->next=wsk3;  // ustawiamy nast�pnik g�owy jako wska�nik na nowy element
     //tu ju� mamy list� jak na rysunku - "g�owa", pierwszy eleemnt to 5, drugi to 7, trzeci to i 4
     // teraz dodajemy 11 na pocz�tek
     struct element * wsk4 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pami�ci na jeden z element�w
     wsk4->i=11;
     wsk4->next=lista->next; // nast�pnik nowego elementu to nastepnik "g�owy"
     lista->next=wsk4;  // ustawiamy nast�pnik g�owy jako wska�nik na nowy element
     return 0;
}
