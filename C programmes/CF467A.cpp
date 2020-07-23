#include<bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int n, count = 0;

    scanf("%d", &n);

    while(n--)
    {
        int p, q;

        scanf("%d%d", &p, &q);

        if((p < q) && (q - p) >= 2)
        {
            count++;
        }
    }

    printf("%d", count);
}
