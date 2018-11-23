#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    double a,b,c,s,p;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
         p=(a+b+c)/2;
         s=sqrt(p*(p-a)*(p-b)*(p-c));
         printf("%lf",s);
    }
    else
    {
         printf("-1");
    };
    return 0;
}
