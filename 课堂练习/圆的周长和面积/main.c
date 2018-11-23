#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define g 10.0

int main()
{
    double t,height;
    scanf("%lf",t);
    height=(g*t*t)/2;
    printf("height=%.2f",height);
    return 0;
}
