#include<stdio.h>

int main(void)
{
    int input;
    int alcohol=0 ,gasoline=0 ,diesel=0;

    do{
        scanf("%d", &input);

        if(input == 1)
        {
            alcohol++;
        }

        else if(input == 2)
        {
            gasoline++;
        }

        else if(input == 3)
        {
            diesel++;
        }

        else if(input == 4)
        {
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n", alcohol);
            printf("Gasolina: %d\n", gasoline);
            printf("Diesel: %d\n", diesel);
        }
    }while(input != 4);


    return 0;
}
