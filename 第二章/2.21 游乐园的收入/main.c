#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n,sum,t;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&m);
        sum=0;
        for(i=0;i<m;i++)
        {
            scanf("%d",&t);
            sum+=t;
        }
        printf("%d\n",sum);
    }
    return 0;
}
