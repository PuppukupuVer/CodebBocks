#include <stdio.h>

int main()
{
    int n,a,i,max;
    scanf("%d",&n);
    max=0;

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(max<a)max=a;
    }

    printf("%d",max);
    return 0;
}
