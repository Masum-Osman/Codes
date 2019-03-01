#include<stdio.h>

int main(void)
{
    int num,i;
    int is_prime;

    printf("Enter Your Number to test: \n");
    scanf("%d", &num);

    for(i=2; i<=(num/2)+1; i++)
    {
        if((num%i)==0)
        {
            printf("%d ",i);
        }
    }


    return 0;
}
