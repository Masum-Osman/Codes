#include<stdio.h>

int main(void)
{
    char string[80];
    int length;
    int i;
    int word=0;

    printf("Enter String(less than 80 character)\n");
    gets(string);

    length = strlen(string);
    printf("Here are the number of characters you entered: %d\n\n", length);

   for(i=1, i<80, i++)
    {
        if(i==' ')
        {
            word= word+1;
        }
    }
    printf("Here are the number of words you entered: %d", word+1);

    return 0;
}
