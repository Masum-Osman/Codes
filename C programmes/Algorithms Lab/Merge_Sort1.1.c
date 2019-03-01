#include<stdio.h>
#define infinity   10000000;
int main()
{
    int ara[100],n,i;
    printf("Enter ur number of element : ");
    scanf("%d", &n);
    printf("Enter ur number : ");
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }

    merge_sort(ara,0,n-1);

    printf("Your sorted array is : ");
     for(i=0;i<n;i++){
        printf("%d\n",ara[i]);
    }
    return 0;
}
void merge_sort(int ara[], int left,int right)
{

    if(left<right){

        int mid = (left + (right-1))/2;
        merge_sort(ara, left, mid);
        merge_sort(ara, mid+1, right);
        merge(ara, left , mid, right);
    }
}

void merge(int ara[], int left, int middle ,int right){

    int i,j,k,n1,n2;
    n1= middle - (left +1);
    n2=right - middle;
    int L[n1],R[n2];
    for(i=0;i<n1;i++) L[i]= ara[left + i];
    for(j=0;j<n2;j++) R[j]= ara[middle +1+j];
    R[n2] = infinity;
    L[n1] = infinity;
    i=0,j=0,k=left;
    while(k<=right){
        if(L[i]<R[j]){
            ara[k]=L[i];
            i++;
        }
        else{
            ara[k]=R[j];
            j++;
        }
        k++;
    }

}









