#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    scanf("%lf",&a);
    if(a>=0)
    {
        printf("%lf",a);
    }
    else
    {
        printf("%lf",-a);
    };
    return 0;
}
