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

    printf("\n%d\n\n", read);

    if(read > 50000)
    {
        printf("It Is A Big Amount You Have...(--)\nBe careful \n\n\n");
    }


    printf("    %d note(s) of TK 1000.00\n\n", thousand);
    printf("    %d note(s) of TK 500.00\n\n", fhoundred);
    printf("    %d note(s) of TK 100.00\n\n", houndred);
    printf("    %d note(s) of TK 50.00\n\n", fifty);
    printf("    %d note(s) of TK 20.00\n\n", twenty);
    printf("    %d note(s) of TK 10.00\n\n", ten);
    printf("    %d note(s) of TK 5.00\n\n", five);
    printf("    %d note(s) of TK 2.00\n\n", two);
    printf("    %d note(s) of TK 1.00\n\n", one);


    return 0;


}
