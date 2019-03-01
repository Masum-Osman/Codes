
#include<stdio.h>

#include<math.h>

int main()

{

    double n,m,a;

    double ans;


    scanf("%lf %lf %lf",&n,&m,&a);

        double row = ceil(n/a);

        double column = ceil(m/a);
        ans =row * column;

        printf("%f\n",ans);


    return 0;

}
