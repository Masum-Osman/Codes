#include<stdio.h>

int main(void)
{
    int num;

    float sum = 0, counter = 0;
    float avg;

    do{
        scanf("%d", &num);

        if(num > 0)
        {
            sum = sum+num;
            counter++;
            avg = sum/counter;
        }
    }while(num>0);


    printf("%.2f\n", avg);

    return 0;
}
