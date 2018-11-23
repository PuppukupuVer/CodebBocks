#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)printf("甲比乙年长");
    if(a<b)printf("乙比甲年长");
    if(a==b)printf("甲乙同龄");
    return 0;
}
