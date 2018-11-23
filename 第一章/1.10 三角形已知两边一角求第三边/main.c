#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define P 3.14159265
int main()
{
    double a,b,c,C=0;

    scanf("%lf%lf%lf",&a,&b,&C);
    c=sqrt(a*a+b*b-2*a*b*cos((C/180)*P));
    printf("%.2f\n",c);
    return 0;
}
