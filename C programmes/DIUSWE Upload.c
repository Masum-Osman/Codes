#include<stdio.h>

int main()
{
    int i, N,j;
    scanf("%d", &N);

    int arr[N];

    for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }


    /*for(j = N; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }*/

    for(i = N-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
