#include<stdio.h>
int main()
{
    int A,B,C,D;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    if(B>C && D>A && ((C+D)>(A+B)) && C>-1 && D>-1 && A%2==0)
    {
        printf("Valores aceitos\n");
    }


    else
        printf("Valores nao aceitos\n");
}
