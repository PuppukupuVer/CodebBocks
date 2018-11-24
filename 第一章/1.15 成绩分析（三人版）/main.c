#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,max,min,sum,PassNum=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=60) PassNum++;
    if(b>=60) PassNum++;
    if(c>=60) PassNum++;

    max=a;
    if(max<b) max=b;
    if(max<c) max=c;

    min=a;
    if(min>b) min=b;
    if(min>c) min=c;

    sum=a+b+c;

    printf("%d %d %d %.1f",PassNum,max,min,(double)sum/3);
    return 0;
}
