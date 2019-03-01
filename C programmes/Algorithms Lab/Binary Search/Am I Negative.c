#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(-100<=n<=100)
    {
        if(n>0)
              printf("%d\n",n);
        else
         printf("%d\nNegative\n",n);

    }
}
