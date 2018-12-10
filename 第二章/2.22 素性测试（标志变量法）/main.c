#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,i;
    scanf("%d",&k);
    int flag=1;
    for(i=2;flag==1&&i<=k-1;i++)
    {
        if(k%i==0)flag=0;
    }

    if(flag==1)printf("yes");
    else printf("no");
    return 0;
}
