#include<stdio.h>

int main(void)
{
    int i;
    float num, sum, product;

    sum = 0;
    product = 1;

    printf("Enter your Number\n");
    scanf("%f",&num);

    for(i=1; i<num; i++)
    {
        sum = sum+i;
        product = product*i;
    }

    printf("Product and Sum: %f %f\n", product,sum);

    return 0;
}
