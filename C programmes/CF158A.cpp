#include<bits/stdc++.h>

int main()
{
    int n, k, marks[100];
    int count = 0;
    scanf("%d%d", &n, &k);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(marks[i]>=marks[k-1]&&marks[i]>0)
            count++;
    }


    printf("%d", count);
}
