#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

int main()
{
     struct element * lista = NULL; //tworzymy "pust� list�"
     //dodajemy pierwszy element na list� (tu poj�cie koniec czy pocz�tek nie ma wi�kszego sensu)
     struct element * wsk = malloc(sizeof(struct element)); // rezerwujemy miejsce w pami�ci na jeden z element�w
     wsk->i=-4;
     wsk->next=NULL; //bo nic wi�cej nie ma na li�cie
     lista=wsk; // ustawiamy wskaznik pocz�tku listy
     // dodajemy nowy element na pocz�tek
     struct element * wsk2 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pami�ci na jeden z element�w
     wsk2->i=7;
     wsk2->next=lista; // nast�pnik nowego elementu to bie�acy wskaznik listy
     lista=wsk2;  // ustawiamy wskaznik nowego elementy jako pocz�tek listy
     // dodajemy jeszcze jeden nowy element na pocz�tek
     struct element * wsk3 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pami�ci na jeden z element�w
     wsk3->i=5;
     wsk3->next=lista; // nast�pnik nowego elementu to bie�acy wskaznik listy
     lista=wsk3;  // ustawiamy wskaznik nowego elementy jako pocz�tek listy
     //tu ju� mamy list� jak na rysunku - pierwszy eleemnt yo 5, drugi to 7, trzeci to i 4
     // teraz dodajemy 11 na pocz�tek
     struct element * wsk4 = malloc(sizeof(struct element)); // rezerwujemy miejsce w pami�ci na jeden z element�w
     wsk4->i=11;
     wsk4->next=lista; // nast�pnik nowego elementu to bie�acy wskaznik listy
     lista=wsk4;  // ustawiamy wskaznik nowego elementy jako pocz�tek listy
     return 0;
}
