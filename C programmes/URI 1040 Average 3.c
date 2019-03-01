#include<stdio.h>

int main()
{
    float A,B,C,D;
    float intu, avg, sscore,navg;


    scanf("%f%f%f%f", &A,&B,&C,&D);

    intu = ((A*2)+(B*3)+(C*4)+(D*1));

    avg = intu/10;

    printf("Media: %.1f\n", avg);

    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }

    if(avg<5.0)
    {
        printf("Aluno reprovado.\n");
    }

    if(avg==5.0 && 6.9)
    {
        printf("Aluno em exame.\n");

    }

    return 0;

}
