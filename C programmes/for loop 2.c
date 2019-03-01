#include<stdio.h>

int main(void)
{
    int i,count=0;

    for(i=1; i<16; i++)
    {
        printf("Your Code is Terminating %d Times.\n", i);
        count++;
    }

    printf("\nFor Loop terminated for %d times.\n", count);

    return 0;
}
