#include<stdio.h>

int main(void)
{
    int num,i;
    int is_prime;

    printf("Enter Your Number to test: \n");
    scanf("%d", &num);

    //is_prime = 1;

    for(i=2; i<=num/2; i++)
    {
        if((num%i)==0)
            is_prime = 0;
            printf("The Number is not Prime\n");
    }

    //if(is_prime == 1)
        printf("Your Number is Prime\n");



    return 0;
}
