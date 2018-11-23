#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,h,s=0;

    scanf("%lf%lf%lf",&a,&b,&h);
    s=(a+b)*h/2;
    printf("%.2f",s);
    return 0;
}
