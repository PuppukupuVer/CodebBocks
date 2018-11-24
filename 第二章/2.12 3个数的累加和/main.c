#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,sum;
    sum=0;

    for(i=1;i<=3;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }

    printf("%d",sum);
    return 0;
}
