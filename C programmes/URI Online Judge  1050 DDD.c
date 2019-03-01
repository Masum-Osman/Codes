#include<stdio.h>

int main(void)
{
    int digit;

    scanf("%d", &digit);

    if(digit == 61)
        printf("Brasilia\n");
    else if(digit == 71)
        printf("Salvador\n");
    else if(digit == 11)
        printf("Sao Paulo\n");
    else if(digit == 21)
        printf("Rio de Janeiro\n");
    else if(digit == 32)
        printf("Juiz de Fora\n");
    else if(digit == 19)
        printf("Campinas\n");
    else if(digit == 27)
        printf("Vitoria\n");
    else if(digit == 31)
        printf("Belo Horizonte\n");

    else
        printf("DDD nao cadastrado\n");

    return 0;
}
