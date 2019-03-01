#include<stdio.h>

float GETsqr(void);

int main(void)
{
    printf("\t\tSquare Code\n\n\n");
    float sqr;
    sqr = GETsqr();

    printf("Your ans is %f",sqr);

    return 0;
}

float GETsqr(void)
{
    float num;
    printf("Enter your number: \n");
    scanf("%f",&num);

    return num*num;
}
