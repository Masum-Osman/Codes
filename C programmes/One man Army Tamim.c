#include<stdio.h>
int main()
{

    int M,N;

    scanf("%d %d", &M, &N);
    while ( scanf("%d %d", &M, &N) != EOF )

	{
	      printf("Runs R: %d", M*N*6);
	}
}
