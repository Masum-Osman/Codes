#include<stdio.h>
int main()
{
    if(avg<5.0 )
        {
            printf("Aluno reprovado.\n");
        }

    else if(avg>=5.0 && avg<=6.9)
        {
            printf("Aluno em exame.\n");
        }

    else if(avg=7.0 || avg>7.0)
        {
            printf("Aluno aprovado.\n");
        }

    while(avg>=5.0 && avg<=6.9)
    {

        scanf("%f", &sscore);
        printf("Nota do exame: %.1f\n", sscore);

        navg = (avg+sscore)/2;
        if(navg =4.9 || navg<4.9)
            {
                printf("Aluno reprovado.\n");
            }
        else if(navg>=5)
            {
                printf("Aluno aprovado.\n");
            }
        printf("Media final: %.1f\n", navg);

    }


    return 0;
}
