live_dfs.c
Who has access
V
System properties
Type
C
Size
577 bytes
Storage used
577 bytesOwned by PES Institutions
Location
Programs - Prof Shylaja
Owner
Vibha(PES1UG19CS565) PESU S&H Student
Modified
Feb 11, 2021 by Vibha(PES1UG19CS565) PESU S&H Student
Opened
9:04 PM by me
Created
Feb 11, 2021
No description
Viewers can download
#include<stdio.h>
#define MAX 5
void read_matrix(int adj[MAX][MAX],int n)
{
  printf("enter the adjacenct matrix");
 for(int i=0;i<n;i++)
 for(int j=0;j<n;j++)
  scanf("%d",&adj[i][j]);
}
void dfs(int sv,int adj[MAX][MAX],int visited[MAX],int n)
{
 visited[sv]=1;
 printf("%d",sv);
 for(int i=0;i<n;i++)
  {
    if(adj[sv][i] && !visited[i])
      dfs(i,adj,visited,n);
   }
}

int main()
{
 int adj[MAX][MAX];
 int visited[MAX]={0};
 int n,i;
  printf("enter the no. of vertices");
  scanf("%d",&n);
  read_matrix(adj,n);
  dfs(0,adj,visited,n);
}
