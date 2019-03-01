#include<stdio.h>

int main(void)
{
    int Number;
    int i;

    scanf("%d", &Number);

    for(i=1; i<11; i++)
    {
        printf("%d x %d = %d\n", i,Number, i*Number);
    }
}
