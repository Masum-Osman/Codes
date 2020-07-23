#include<bits/stdc++.h>

int main()
{
    int node, edges, pI, pJ;
    int graph[100][100];

    printf("Enter Number of Nodes: ");
    scanf("%d", &node);
    printf("Enter Number of Edges: ");
    scanf("%d", &edges);


    for(int i = 0; i < node; i++)
    {
        for(int j = 0; j < edges; j++)
        {
            scanf("%d \t", &graph[i][j]);
        }
    }


    for(int i = 0; i < node; i++)
    {
        for(int j = 0; j < edges; j++)
        {
            if(graph[i][j] == 1);
            {
                printf("%d, %d \n", i,j);
                 printf("%d", graph[i][j]);
            }
        }
    }


    printf("Thanks for your data. Here is your matrix graph\n");
}
