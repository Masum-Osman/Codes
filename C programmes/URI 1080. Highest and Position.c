#include<stdio.h>

int main(void)
{
    int arr[5];
    int i, max;
    int value, position = 1;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            position = i+1;
        }
    }

    printf("%d\n%d\n", max, position);
}
