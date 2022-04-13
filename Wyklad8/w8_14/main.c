#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a=1234.8912;
    printf("%f\n",a);
    printf("%lf\n",a);
    printf("%5.2f\n",a);
    printf("%3.1f\n",a);
    printf("%10.3f\n",a);
    printf("%+10.3f\n",a);
    printf("%010.2f\n",a);
    printf("%010.1e\n",a);
    printf("%010.1E\n",a);
    double b=1234e124;
    printf("%f\n",b);
    printf("%lf\n",b);
    printf("%5.2f\n",b);
    printf("%3.1f\n",b);
    printf("%10.3f\n",b);
    printf("%+10.3f\n",b);
    printf("%010.2f\n",b);
    printf("%010.1e\n",b);
    printf("%010.1E\n",b);
    return 0;
}
