#include<stdio.h>

int main(void)
{
    int choice;
    float value;

    printf("Enter Value: \n");
    scanf("%f",&value);

    printf("1: Feet to Meter\n2: Meter to Feet\n");
    printf("Enter Choice: \n");
    scanf("%d",&choice);

    if(choice == 1)
    {
        printf("%f", value/3.28);
    }

    if(choice == 2)
    {
        printf("%f", value*3.28);
    }

    return 0;
}
