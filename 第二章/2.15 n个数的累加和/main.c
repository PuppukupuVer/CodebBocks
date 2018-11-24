#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,n,sum;
    sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }

    printf("%d",sum);
    return 0;
}
