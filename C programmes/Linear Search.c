#include<stdio.h>
int main(void)
{
    int limit,i;
    printf("Enter your limit: \n");
    scanf("%d", &limit);

    printf("Enter your array: [max %d digits]\n", limit);
    int arr[limit];

    for(i=0; i<limit; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter your Search key: \n");
    int key;
    scanf("%d", &key);

    for(i=0; i<limit; i++)
    {
        if(arr[i] == key){
            printf("Here is your key value %d at position %d \n",key, i+1);
        }
    }
}
