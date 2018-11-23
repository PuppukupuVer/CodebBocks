#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a<0||a>100)
        printf("error");
        else if(a>=0&&a<60)
            printf("fail");
            else if(a>=60&&a<70)
                printf("pass");
                else if(a>=70&&a<80)
                    printf("medium");
                    else if(a>=80&&a<90)
                        printf("good");
                        else if(a>=90&&a<=100)
                            printf("excellent");
    return 0;
}
