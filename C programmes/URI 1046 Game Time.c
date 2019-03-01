#include<stdio.h>
int main()
{
    int H1,M1,H2,M2;
    int sprtv1,sprtv2;
    int hour,min;

    scanf("%d%d%d%d", &H1,&M1,&H2,&M2);

    if(H2>H1||H2==H1)
    {
       hour = H2-H1;
    }

    else
    {
        sprtv1 = 24-H1;
        hour = sprtv1+H2;

    }

    if(M2>M1||M2==M1)
    {
        min = M2-M1;
    }

     else
    {
        sprtv2 = 60-M1;
        min = sprtv2+M2;

    }

    if(H2-H1==1 && M2-M1<60)
    {
        hour = hour-1;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, min);

    return 0;
}


