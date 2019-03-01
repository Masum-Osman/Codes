#include<stdio.h>

int main(void)
{
    int i;
    int a[5];

    for(i=1, i<5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("%d ",a[i]);

    //printf("\nFor Loop terminated for %d times.\n", count);

    return 0;
}
