#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;

    scanf("%d",&n);

    for(i=n;i>=0;i--)
    {
        if(i==0)
        {
            printf("go!");
        }
        else
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
