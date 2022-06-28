live_bfs.c
Who has access
V
System properties
Type
C
Size
742 bytes
Storage used
742 bytesOwned by PES Institutions
Location
Programs - Prof Shylaja
Owner
Vibha(PES1UG19CS565) PESU S&H Student
Modified
Feb 11, 2021 by Vibha(PES1UG19CS565) PESU S&H Student
Opened
9:02 PM by me
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
void bfs(int adj[MAX][MAX],int visited[MAX],int q[MAX],int f,int r,int n)
{
  while(f<=r)
  {
   int v=q[f++];if(f>r) {f=0;r=-1;}
   printf("%d",v);
   for(int i=0;i<n;i++)
    if(adj[v][i] && !visited[i])
      {
        q[++r]=i;
        visited[i]=1;
      }
  }
}
    
  

int main()
{
 int adj[MAX][MAX];
 int visited[MAX]={0};int q[MAX];
 int f=0;int r=-1;
 int n,i;
  printf("enter the no. of vertices");
  scanf("%d",&n);
  read_matrix(adj,n);
  r++;
  q[r]=0;
  visited[0]=1; 
  bfs(adj,visited,q,f,r,n);
}
