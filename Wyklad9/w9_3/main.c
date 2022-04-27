#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    wchar_t napis[20];
    wscanf(L"%ls",napis);
    wprintf(L"%ls\n",napis);
    return 0;
}
