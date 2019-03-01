#include<stdio.h>
int main()
{
    int D,A,S,Y,T,C,n;
    scanf("%d",&T);
    for(D=1;D<=T;D++){
        if(D!=1){
            printf("\n");
        }
        scanf("%d",&n);
        C=n;
        for(A=1;A<=n;A++){
            for(S=1;S<C;S++){
                printf(" ");
            }
            C--;

            for(Y=1;Y<=2*A-1;Y++){
                printf("*");
            }
            printf("\n");
        }
   }
   return 0;
}
