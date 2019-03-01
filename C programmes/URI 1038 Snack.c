#include<stdio.h>
int main()
{
    int X,Y;
    float price;

    scanf("%d", &X);
    scanf("%d", &Y);

    if(X==1)
        {
            price = 4.00*Y;
            printf("Total: R$ %.2f\n",price);
        }


    if(X==2)
        {
            price = 4.50*Y;
            printf("Total: R$ %.2f\n",price);
        }

    if(X==3)
    {
        price = 5.00*Y;
        printf("Total: R$ %.2f\n",price);
    }


    if(X==4)
    {
        price = 2.00*Y;
        printf("Total: R$ %.2f\n",price);
    }


    if(X==5)
    {
        price = 1.50*Y;
        printf("Total: R$ %.2f\n",price);
    }


    return 0;
}
