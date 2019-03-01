#include<stdio.h>
int main()
{
    int thousand, fhoundred, houndred, fifty, twenty, ten, five, two, one;
    int read;
    int support0, supportnill, support1, support2, support3,support4, support5;

    scanf("%d", &read);

    thousand = read/1000;
    supportnill = read%1000;
    fhoundred = supportnill/500;
    support0 = supportnill%500;
    houndred = support0/100;
    support1 = support0%100;
    fifty = support1/50;
    support2 = support1%50;
    twenty = support2/20;
    support3 = support2%20;
    ten = support3/10;
    support4 = support3%10;
    five = support4/5;
    support5 = support4%5;
    two = support5/2;
    one = support5%2;
}
