#include<stdio.h>
int main()
{
    int ara[100], i,j,n,key;
    printf("Enter your unsorted array size(less than 100) :");
    scanf("%d",&n);
    printf("Enter your element : ");

    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }

 for(j=1;j<n;j++){
        key= ara[j];
        i = j-1;
         while(i>=0 && ara[i]>key){
            ara[i+1]= ara[i];
            i--;
         }
         ara[i+1]= key;
    }

    printf("In ascending order : ");
     for(i=0;i<n;i++){
        printf("\n%d",ara[i]);
     }

 return 0;
}
