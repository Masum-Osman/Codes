#include<stdio.h>

void function(void);    /*prototype for function()*/

int main(void)
{
    printf("I ");
    function();
    printf("C.");

}

void function(void)
{
    printf("Like ");
}
