#include<bits/stdc++.h>

using namespace std;

int main()
{
    int initialBananaCost, dollars, totalBananas;
    int totalBananaPrice = 0;

    scanf("%d%d%d", &initialBananaCost, &dollars, &totalBananas);

    for(int i = 1; i <= totalBananas; i++)
    {
        totalBananaPrice = totalBananaPrice + (initialBananaCost * i);
    }

    if(totalBananaPrice > dollars)
    {
        printf("%d", totalBananaPrice - dollars);
    }
    else
    {
        printf("0");
    }
}
