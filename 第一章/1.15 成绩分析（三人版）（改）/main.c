#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score,PassNums,max,min,sum;

    sum=0;
    PassNums=0;

    scanf("%d",&score);
    if(score>=60)PassNums++;
    max=score;
    min=score;
    sum+=score;

    scanf("%d",&score);
    if(score>=60)PassNums++;
    if(max<score)max=score;
    if(min>score)min=score;
    sum+=score;

    scanf("%d",&score);
    if(score>=60)PassNums++;
    if(max<score)max=score;
    if(min>score)min=score;
    sum+=score;
    printf("%d %d %d %.1lf",PassNums,max,min,sum/3.0);
    return 0;
}
