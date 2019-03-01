#include<stdio.h>

 int main()
 {
     int day, month;

     printf("\tHello there...:)\n");
     printf("Please feel fun entering your dates...\n");
     printf("Enter there... this is waiting:)\n");

     scanf("%d%d", &day, &month);

     if(day == 26 && month == 01)
     {
         printf("  Happy Birth Day Masum...:)\a\n");
     }

     else
     {
         printf("   You are not Masum I guess...\n");
         printf("See you again...\n");
     }

     return 0;
 }
