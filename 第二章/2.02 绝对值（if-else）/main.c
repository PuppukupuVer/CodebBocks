#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;//给出的任意的一个整数
    scanf("%d",&x);
    if(x>=0)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",-x);
    };
    return 0;
}
