#include<stdio.h>

int main(void)
{
    int input;
    int i,j;

    scanf("%d", &input);

    for(i=1; i<input+1; i++)
    {
        for(j=i; j<=3; j++)
        {
            j = i*j;
            printf("%d ", j);
        }

        printf("\n");
    }
}
