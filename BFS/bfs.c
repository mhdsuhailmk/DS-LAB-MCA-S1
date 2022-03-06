#include <stdio.h>

void bfs(int);

int graph[10][10],visited[10],n;

void bfs(int vertex)
{
 int i;

 printf("%d\t",vertex);
 visited[vertex]=1;
 for(i=0;i<n;i++)
  {
   if(graph[vertex][i]==1 && !visited[i])
     {
      bfs(i);
     }
  }
}



int main()
{

 int i,j;
 printf("Enter no of vertices:");
 scanf("%d",&n);
 printf("\nEnter the matrix");
 for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
    scanf("%d",&graph[i][j]);
   }
  }

 for(i=0;i<n;i++)
 {
  visited[i]=0;
 }

 printf("BREADTH FIRST SEARCH TRAVERSAL IS:\n");
 bfs(0);

return 0;
}

