#include <stdio.h>

int main()
{
    char nap1[] = "absddfvjskjf";
    char *nap2 = "oijefj";
    nap1[4] = 'M';
    *(nap1 + 7) = 'M';
    nap2[2]='3'; // czy to zawsze mo¿liwe?
    return 0;
}
