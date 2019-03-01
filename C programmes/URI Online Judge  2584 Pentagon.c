#include<stdio.h>
#include<math.h>

int main(void)
{
    int i;
    long testCase , slide;
    float result;

    scanf("%d", &testCase);

    for(i=0; i<testCase; i++)
    {
        scanf("%d", &slide);

        float a = 5 * (5 + (sqrt(5)*2));
        float b = sqrt(a)/4;

        result = b*(slide*slide);

    }

    for(i=0; i<testCase; i++)
    {
        printf("%.3f\n", result);
    }


}
