#include<bits/stdc++.h>

int main()
{
    int node, edges, pI, pJ;
    int graph[100][100];

    printf("Enter Number of Nodes: ");
    scanf("%d", &node);
    printf("Enter Number of Edges: ");
    scanf("%d", &edges);

    for(int i = 0; i < edges; i++)
    {
        scanf("%d%d", &pI, &pJ);
        graph[pI][pJ] = 1;
        graph[pJ][pI] = 1;
    }

    printf("Thanks for your data. Here is your matrix graph\n");

    for(int i = 0; i < node; i++)
    {
        for(int j = 0; j < edges; j++)
        {
            printf("%d \t", graph[i][j]);
        }
        printf("\n");
    }
}
