#include<stdio.h>

int main(void)
{
    int first, last;
    int i, sum = 0;

    scanf("%d%d", &first, &last);

    //if(first < last)
    {
        for(i=first; i<=last; i++);
        {
            if(i%13 != 0)
                sum = sum+i;
        }

        printf("%d \n", sum);
    }

    /*if(first > last)
    {
        for(i=last; i<=first; i--);
        {
            if(i%13 != 0)
                sum = sum+i;
        }

        printf("%d \n", sum);
    }*/


    return 0;
}
