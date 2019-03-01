#include<stdio.h>

int main(void)
{
    char string[80];
    int length;
    printf("Enter String(less than 80 character)\n");
    gets(string);

    length = strlen(string);
    printf("Here are the number of characters you entered: %d\n\n", length);


    return 0;
}
