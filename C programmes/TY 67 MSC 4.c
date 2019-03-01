#include<stdio.h>

int main(void)
{
    int i,count = 0;
    int magic = 1435, guess;

    for(i=0; i<10 && guess!=magic; i++)
    {
        printf("Enter your Guess: \n");
        scanf("%d", &guess);

        if(guess==magic)
            {
                printf("You are Right!\n");
                printf("%d is the magic number\n", magic);
            }

        else
        {
            printf("...Sorry, You're Wrong!...\n");
            if(guess>magic)
                printf("Your Guess is high.\n");
            else
                printf("Your Guess is low.\n");
        }
            count++;

    }

    printf("\tYou tried %d times!\n", count);

    return 0;
}
