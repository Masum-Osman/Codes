#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int T;

    scanf("%d", &T);

    for (int i=1; i<=T; i++) {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);

        printf("Case %d: ", i);

        if((a < b && b < c) || (c < b && b < a))
            {
                printf("%d\n", b);
            }

        else if((a < c && c < b) || (b < c && c < a))
            {
                printf("%d\n", c);
            }
        else
            {
                printf("%d\n", a);
            }
    }
}
