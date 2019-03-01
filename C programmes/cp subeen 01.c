#include<stdio.h>

int main(void)
{
    double XplusY;
    double XminusY;

    scanf("%lf%lf", &XplusY, &XminusY);

    printf("Result of X: %.2lf\n",(XplusY + XminusY)/2);
    printf("Result of Y: %.2lf\n",(XplusY - XminusY)/2);

    return 0;
}
