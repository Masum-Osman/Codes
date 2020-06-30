#include<bits/stdc++.h>

void solve()
{
    char str[110];

    scanf("%s", str);

    if(strlen(str) > 10)
    {
        printf("%c%d%C\n",str[0],strlen(str)-2,str[strlen(str) - 1]);
    }
    else
    {
        printf("%s\n", str);
    }
}


int main()
{
    int T;

    scanf("%d", &T);

    while(T--)
    {
        solve();
    }
}
