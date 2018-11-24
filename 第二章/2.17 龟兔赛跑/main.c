#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,k,i;

    scanf("%d",&k);

    for(i=1;i<=k;i++)
    {
        scanf("%d%d",&a,&b);
        if(a>b)printf("time %d:tortoise leading\n",i);
        if(a==b)printf("time %d:drawing\n",i);
        if(a<b)printf("time %d:rabbit leading\n",i);
    }

    return 0;
}
