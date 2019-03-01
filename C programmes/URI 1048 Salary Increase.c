#include<stdio.h>

int main(void)
{
    float input;
    float NewSalary;
    float increased;

    scanf("%f", &input);

    if(input >= 0 && input <= 400)
       {
           increased = (input*15)/100;
           NewSalary = input+increased;
           printf("Novo salario: %.2f\n",NewSalary);
           printf("Reajuste ganho: %.2f\n",increased);
           printf("Em percentual: 15%\n");
       }

    if(input >= 400.01 && input <= 800)
       {
           increased = (input*12)/100;
           NewSalary = input+increased;
           printf("Novo salario: %.2f\n",NewSalary);
           printf("Reajuste ganho: %.2f\n",increased);
           printf("Em percentual: 12%");
       }

    if(input >= 0 && input <= 400)
       {
           increased = (input*15)/100;
           NewSalary = input+increased;
           printf("Novo salario: %.2f\n",NewSalary);
           printf("Reajuste ganho: %.2f\n",increased);
           printf("Em percentual: 15%\n");
       }

    if(input >= 0 && input <= 400)
       {
           increased = (input*15)/100;
           NewSalary = input+increased;
           printf("Novo salario: %.2f\n",NewSalary);
           printf("Reajuste ganho: %.2f\n",increased);
           printf("Em percentual: 15%\n");
       }

    if(input >= 0 && input <= 400)
       {
           increased = (input*15)/100;
           NewSalary = input+increased;
           printf("Novo salario: %.2f\n",NewSalary);
           printf("Reajuste ganho: %.2f\n",increased);
           printf("Em percentual: 15%\n");
       }


}
