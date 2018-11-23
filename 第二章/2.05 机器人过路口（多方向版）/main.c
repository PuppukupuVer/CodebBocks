#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,l,s,r;//d=direction,l=left,s=straight,r=right
    scanf("%d",&d);
    scanf("%d%d%d",&s,&l,&r);
    if((d==1&&s==1)
       ||if(d==-1&&l==1)
       ||if(d==2&&l=1)
       ||if(d=-2&&r==1))
    {
        printf("pass");
    }
    else
    {
        printf("wait");
    };
    return 0;
}
