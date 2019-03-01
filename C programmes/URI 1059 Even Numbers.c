#include<stdio.h>

int main(void)
{
    int num;

    for(num = 1; num<101; num++)
    {
        if(num%2==0)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
