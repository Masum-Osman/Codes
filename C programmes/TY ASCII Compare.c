#include<stdio.h>
#include<conio.h>

int main(void)
{
    int i;
    char ch,smallest;

    printf("Enter Ten Letters: \n");

    smallest = 'z';

    for(i=0; i<15; i++)
    {
        ch = getche();
        if(ch < smallest)
            smallest = ch;
    }

    printf("\nSmallest ASCII carries %c\n", smallest);

    return 0;
}
