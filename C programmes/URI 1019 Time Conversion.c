#include<stdio.h>

int main()
{
    int N;
    int hour, min, sec, support;

    scanf("%d",&N);

    hour= (int)(N/3600);
    support = N%3600;
    min = support/60;
    sec = support%60;

    printf("%d:%d:%d\n", hour, min,sec);




    return 0;
}
