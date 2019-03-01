#include<stdio.h>
#include<math.h>

int main()
{
    float A,B,C;
    float support, sroot;
    float R1, R2;

    scanf("%f%f%f", &A, &B, &C);
    if(A==0)
    {
        printf("Impossivel calcular\n");
    }

    else
    {
        support = (B*B) - (4*(A*C));
        R1 = (-B + sqrt(support))/(2*A);
        R2 = (-B - sqrt(support))/(2*A);

        printf("%.5f\n", R1);
        printf("%.5f\n", R2);
    }

    return 0;
}
