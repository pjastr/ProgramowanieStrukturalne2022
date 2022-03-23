#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int m = 8;
    int tabb1[5]; // ok
    int tabb2[3*2+1]; // ok
    int tabb3[sizeof(int)+1]; // ok
    //int tabb4[-2]; // nie,  bo <0
    int tabb5[0]; // ???
    //int tabb6[6.5]; // nie, bo nie calk.
    //int tabb7[(int)2.5]; // ???
    int tabb8[n]; // brak dla C90
    int tabb9[m]; // Brak dla C90
    return 0;
}
