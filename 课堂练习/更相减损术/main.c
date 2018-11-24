#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    a=0;b=0;c=0;
    scanf("%d%d",&a,&b);
    c=a-b;
    for(c<=0)
    {
        c=b-c;
    }
    printf("%d",c);
    return 0;
}
