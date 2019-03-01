#include<stdio.h>
int main()
{
    int ara[100], i,n, ck,key,loc;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        }
        scanf("%d",&key);


    for(i=0;i<n;i++){
        if(ara[i]==key){
            ck=1;
            loc=i+1;
            break;
        }
    }
    if(ck==1)
        printf("%d",loc);
    else
        printf("No");
    return 0;
}
