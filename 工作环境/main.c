#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,n,N;//NΪ�²������nΪ��Ϸ���������������aΪ�û�����
    scanf("%d%d",&n,&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a);
        if(a>n&&a>=0)printf("Too big\n");
        if(a<n&&a>=0)printf("Too small\n");
        if(a==0||i>N)break;
        if(a<0)printf("Game Over\n");break;
        if(i==1)printf("Bingo!");
        if(i<=3&&i>1)printf("Lucky You!");
        if(i>=3&&i<=N)printf("Good Guess!");
        if(i>N)printf("Game Over");
    }
    return 0;
}
