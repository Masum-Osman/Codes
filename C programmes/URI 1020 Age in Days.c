#include<stdio.h>
int main()
{
    int D;
    int ano,mes,dia;
    int support;

    scanf("%d",&D);

    ano=D/365;
    support = D%365;
    mes=support/30;
    dia=support%30;

    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dia);

    return 0;

}
