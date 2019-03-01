#include<stdio.h>
#include<math.h>

int main(void)
{
    int rooms,len, width,total;
    int i;

    printf("How Many Rooms in The house? : \n");
    scanf("%d",&rooms);

    total = 0;

    for(i=1; i<rooms+1; i++)
    {
        printf("Enter length of %d Room: \n",i);
        scanf("%d", &len);

        printf("Enter Width of %d Room: \n",i);
        scanf("%d", &width);

        total=total+len*width;
    }

    printf("Total Square footage is %d", total);

    return 0;
}
