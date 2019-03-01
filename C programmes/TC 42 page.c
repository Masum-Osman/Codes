#include<stdio.h>

int main(void)
{
    int num;

    printf("Enter an integer: \n");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Number is Negative.\n");
    }
    if(num > -1)
    {
        printf("Number is Non-Negative.\n");
    }

    return 0;
}
