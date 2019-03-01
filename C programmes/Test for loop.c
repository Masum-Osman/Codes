#include<stdio.h>

int main(void)
{
    int i;
    for(i=0; i<10; i++)
    {
        printf("Those are the memory address of i ");
        printf("%d \n", &i);
        printf("%d", 10+56);
    }

    return 0;
}
