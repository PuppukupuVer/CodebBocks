#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    printf("max=%d",max);
    return 0;
}
