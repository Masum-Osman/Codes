#include<stdio.h>

int main(void) {

    int number;
    int i, ans;

    //printf("Enter your limit number: \n");
    //scanf("%d", &number);

    for(number = 0; number < 100 ; number++) {

        for(i =1; i<3; i++) {

        if (number % i == 0){
                ans = number;
        }

        else {
            printf("No Number on there \n");
        }

        }

    }

    printf("That is your Number: ", &ans);



}
