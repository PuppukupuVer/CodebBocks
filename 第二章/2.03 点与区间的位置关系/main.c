#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    if(x<a)
    {
        printf("left");
    }
    else
    {
        if(a<=x&&x<=b)
        {
            printf("middle");
        }
        else
        {
            printf("right");
        };
    };
    return 0;
}
