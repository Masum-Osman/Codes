#include <stdio.h>
int main()
{
   int A,B,C;

   int sto;
   int hi;
   int lo;

   scanf("%d%d%d",&A,&B,&C);

   if (A>B) {
      sto=A;
      lo=B;
   } else {
      sto=B;
      lo=A;
   }
   if (sto>C) {
      hi=sto;
      if(lo>C){
         sto=lo;
         lo=C;
      }else {
         sto=C;
      }
   }else hi=C;

   printf("%d\n", lo);
   printf("%d\n", sto);
   printf("%d\n", hi);

   printf("\n");

    printf("%d\n",A);
    printf("%d\n",B);
    printf("%d\n",C);
}
