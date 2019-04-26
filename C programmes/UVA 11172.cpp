#include<bits/stdc++.h>

using namespace std;
int main()
{
    int T;
    scanf("%d", &T);

    while(T--){
        int a,b;
        scanf("%d", &a);
        scanf("%d", &b);

        if(a > b)
            printf(">\n");

        else if(a < b)
            printf("<\n");
        else
            printf("=\n");
    }
}
