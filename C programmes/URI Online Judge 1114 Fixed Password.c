#include<stdio.h>

int main(void)
{
    int password = 2002;
    int input;

    do{
        scanf("%d", &input);

        if(input == password)
            printf("Acesso Permitido\n");

        else
            printf("Senha Invalida\n");
    }while(input != password);

    return 0;
}
