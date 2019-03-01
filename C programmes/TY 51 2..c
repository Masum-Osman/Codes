#include<stdio.h>

int main(void)
{
    int i;
    int c_num;

    printf("Enter your number from where to start: \n");
    scanf("%d", &c_num);

    for(i=c_num; i>0; i--)
    {
        printf("%d  ", i);

    }


    return 0;
}
