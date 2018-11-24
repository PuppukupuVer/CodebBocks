#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==1)
    {
        printf("dark ");
    }
    else
    {
        printf("light ");
    };
    if(b==1)
    {
        printf("red ");
    }
    else
    {
        printf("blue ");
    };
    if(c==1)
    {
        printf("coat");
    }
    else
    {
        printf("trousers");
    };
    return 0;
}
