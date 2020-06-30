#include<bits/stdc++.h>

/*
int solve()
{
    int P,V,T;

    int count = 0;

    scanf("%d%d%d", &P,&V,&T);

    if((P+V+T) >= 2)
    {
        count++;
    }

    return count;
}
*/

int main()
{
    int T;
    int count = 0;

    scanf("%d", &T);

    while(T--)
    {
        int P,V,T;

        scanf("%d%d%d", &P,&V,&T);

        if((P+V+T) >= 2)
        {
            count++;
        }
    }

    printf("%d", count);
}
