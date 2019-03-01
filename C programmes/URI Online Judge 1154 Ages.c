#include<stdio.h>

int main(void)
{
    int ages,sum=0, div=0;
    float avg;

    do{
        scanf("%d", &ages);
        sum = sum+ages;
        div = div +1;

    }while(ages>=0);

    avg = sum/div;
    printf("%.2f\n", avg);
}
