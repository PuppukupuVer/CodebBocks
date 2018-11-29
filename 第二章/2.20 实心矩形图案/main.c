#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n;
    char ch;
    scanf("%d %d %c",&m,&n,&ch);
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
