#include<bits/stdc++.h>

using namespace std;

int main()
{
    int X, a,b;

    for(int i = 0; i < 5; i++)
    {
         for(int j = 0; j < 5; j++)
        {
            scanf("%d", &X);
            if(X==1)
            {
                a = i;
                b = j;
            }
        }
    }

    printf("%d\n", abs(a-2)+abs(b-2));
}
