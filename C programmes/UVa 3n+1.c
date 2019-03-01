#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    while(n)
    {
        printf("%d", n);
    if(n=1)
        break;
    if(n%2!=0)
    {
        n=3*n+1;
    }
    else n=n/2;
    }

}
