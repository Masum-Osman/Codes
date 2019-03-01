#include<stdio.h>

int func(int);

int main(void)
{
    int num;
    num = func(5);

    printf("%d", num);
    return 0;
}

int func(a)
{
    return 10;
}
