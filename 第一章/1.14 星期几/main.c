#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k=0;
    scanf("%d%d",&n,&k);
    if(k>=0)
    {
        printf("%d",(n+k)%7);
    }
    else
    {
        printf("%d",(n+k)%7+7);
    };
    return 0;
}
