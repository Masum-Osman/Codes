#include<stdio.h>

int main(void)
{
    int a,b;
    int i,div;

    printf("Enter your Range(starting & ending): \n");
    scanf("%d%d",&a,&b);

    printf("Select your Number to Divide: \n");
    scanf("%d",&div);

    for(i=a; i<b+1; i=i++)
    {
        if(i%div==0)
        printf("%d ",i);
    }

    return 0;
}
