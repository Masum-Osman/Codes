#include<stdio.h>

int main()
{
    int T,a,b, sum=0, i;

    scanf("%d",&T);

    if(1<T<100)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%d %d", &a,&b);
            if(1<(a&&b)<100000)
            {
                sum = a+b;
                printf("Case %d: %d\n",i,sum);
            }
        }
    }
}
