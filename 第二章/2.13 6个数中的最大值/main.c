#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,max;
    max=0;

    for(i=1;i<=6;i++)
    {
        scanf("%d",&a);
        if(a>=max)max=a;
    }

    printf("%d",max);
    return 0;
}
