#include<stdio.h>

int main(void)
{
    int LineNumber;
    int i,j;

    scanf("%d", &LineNumber);

    for(i= 0; i<LineNumber; i++)
    {
        for(j=1 ; ; j++)
        {
            printf("%d", j);
            if(j%4 == 0)
                printf("\n");
        }
    }
}
