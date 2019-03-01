#include<stdio.h>
#include<math.h>
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

    int key;
    printf("Enter your Search key: \n");

    scanf("%d", &key);

    int jumpIndex, index = 0;

    jumpIndex = floor(sqrt(limit));
    //printf("Jump Index: %d\n", jumpIndex);

    //Finding Block in where the key value is located
    while(arr[index] < key)
    {
        if(arr[index] > key || jumpIndex >= limit)
        {
            break;
        }

        else
        {
            index = jumpIndex;
            jumpIndex = jumpIndex + floor(sqrt(limit));
        }

    }
    //Block Finded

    //now the index value
    while(arr[index] < key)
    {
        index++;
    }

    if(arr[index] == key)
        printf("Yes. It is found on index %d\n", index+1);
    else
        printf("No. Your search query is not on there.\n");


    return 0;
}















