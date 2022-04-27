#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main()
{
    wchar_t buffer[20];
    int a=3;
    int b=4;
    swprintf(buffer,20*sizeof(wchar_t),L"%d+%d=%d",a,b,a+b);
    wprintf(L"%s",buffer); // na linuxie %ls
    return 0;
}
