#include<stdio.h>
int main(void)
{
    int limit,i,keyValue;

    //input query
    printf("Please Enter your input limit: \n");
    scanf("%d", &limit);

    int array[limit];

    printf("Enter your elements: [Max: %d]\n", limit);

    for(i=0; i<limit; i++)
    {
        scanf("%d", &array[i]);
    }


    //key point to search
    printf("Please Enter your search item: \n");
    scanf("%d", &keyValue);


    //binary_search
    int firstIndex, lastIndex, middle;

    firstIndex = 0;
    lastIndex = limit - 1;
    middle = (firstIndex + lastIndex) / 2;

    while(firstIndex <= lastIndex)
    {
        if(array[middle] < keyValue)
        {
            firstIndex = middle + 1;
        }

        else if (array[middle] == keyValue)
        {
            printf("Your query %d found at location %d.\n", keyValue, middle+1);
            break;
        }

        else
        {
            lastIndex = middle - 1;
        }

        middle = (firstIndex + lastIndex) / 2;
    }

    if (firstIndex > lastIndex)
        printf("Your Query is not on your input or your input was not sorted. \n");
}


