#include<stdio.h>

int main(void)
{

    float num, sum, product;

    sum = 0;
    product = 1;

    printf("Enter your Number\n");


    for(num=1; num<5; num++)
    {
        sum = sum+num;
        product = product*num;
    }

    printf("Product and Sum: %f %f\n", product,sum);

    return 0;
}
