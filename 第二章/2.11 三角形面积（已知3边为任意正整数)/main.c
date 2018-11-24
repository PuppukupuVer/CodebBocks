#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;//a,b,c大于0小于1000
    double p,s;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<=c||a+c<=b||b+c<=a)
    {
        printf("-1");
    }
    else
    {
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("%.4lf",s);
    }
    return 0;
}
