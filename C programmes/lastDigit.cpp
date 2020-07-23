
#include <stdio.h>

int main()
{
    int n, lastDigit, temp;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        temp = n-i;
        if(temp % 10 == 0)
        {
            lastDigit = i;
            break;
        }
    }


    printf("= %d\n", lastDigit);


    return 0;
}
