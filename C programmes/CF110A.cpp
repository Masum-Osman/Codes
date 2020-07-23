#include<bits/stdc++.h>

int main()
{
    long long int n;

    scanf("%lld",&n);
    int digit, count = 0;

    while (n != 0)
    {
        digit = n % 10;
        n = n/10;

        if(digit == 4 || digit == 7)
        {
            count++;
        }
    }

    if(count == 4 || count == 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
