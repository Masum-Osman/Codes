#include<bits/stdc++.h>

int main ()
{
    int L, B, year = 0;

    scanf("%d%d", &L,&B);

    /*while (L < B)
    {
        L = L * 3;
        B = B * 2;
        year++;
    }*/
    for(int i = 0; ; i++)
    {
        L = L * 3;
        B = B * 2;
        year++;

        if(L > B)
        {
            break;
        }
    }

    printf("%d", year);
}
