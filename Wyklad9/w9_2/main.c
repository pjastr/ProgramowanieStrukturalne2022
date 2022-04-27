#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tekst[15]="informatyka";
    printf("%s.\n",tekst);
    printf("%20s\n",tekst);
    printf("%-20s.\n",tekst);
    printf("%20.5s\n",tekst);
    printf("%-20.5s@\n",tekst);
    return 0;
}
