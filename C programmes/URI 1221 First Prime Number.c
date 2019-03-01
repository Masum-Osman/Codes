#include<stdio.h>

int main(void)
{
    int Tcase,i;
    scanf("%d",&Tcase);

    for(i=0; i<Tcase; i++)
    {
        int num;
        int is_prime;

        scanf("%d", &num);
        is_prime = 1;

        for(i=2; i<=num/2; i++)
        {
            if((num%i)==0)
            is_prime = 0;
        }

        if(is_prime == 1)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }


    return 0;
}
