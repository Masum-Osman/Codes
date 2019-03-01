#include<stdio.h>

int main(void)
{
    int choice;
    float value;

    printf("Enter Value: \n");
    scanf("%f",&value);

    printf("1: Kilo-Meter to Mile\n2: Mile to Kilo-Meter\n");
    printf("Enter Choice: \n");
    scanf("%d",&choice);

    if(choice == 1)
    {
        printf("In Mile(s) %f", value/1.60934);
    }

    if(choice == 2)
    {
        printf("In Kilo-Meter(s) %f", value*1.60934);
    }

    return 0;
}
