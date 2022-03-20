#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 12;
    int*pi;
    pi=&num;
    printf("%p\n",&num);
    printf("%d\n",num);
    printf("%p\n",pi);
    printf("%d\n",*pi);
    printf("%p\n",&pi);
    *pi=4;
    printf("---\n");
    printf("%p\n",&num);
    printf("%d\n",num);
    printf("%p\n",pi);
    printf("%d\n",*pi);
    printf("%p\n",&pi);
    //pi=4; nie powinno siê tak robiæ
    int b=89;
    pi =&b;
    printf("---\n");
    printf("%p\n",&num);
    printf("%d\n",num);
    printf("%p\n",pi);
    printf("%d\n",*pi);
    printf("%p\n",&pi);
    return 0;
}
