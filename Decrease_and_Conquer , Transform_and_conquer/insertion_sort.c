live_insertion_sort.c
Who has access
V
System properties
Type
C
Size
665 bytes
Storage used
665 bytesOwned by PES Institutions
Location
Programs - Prof Shylaja
Owner
Vibha(PES1UG19CS565) PESU S&H Student
Modified
Feb 9, 2021 by Vibha(PES1UG19CS565) PESU S&H Student
Opened
9:04 PM by me
Created
Feb 9, 2021
No description
Viewers can download
#include<stdio.h>
#include<time.h>
#define MAX 50
int main()
{clock_t start,end;
 int n,a[MAX],*b;
 int i,j,elt;
 printf("enter the no. of elements");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 
//insertion sort
 start=clock();
for(long long int k=1;k<=1000000;k++)
{for(i=0;i<n;i++)
  a[i]=b[i];
for(i=1;i<n;i++)
 {
   j=i-1;
   elt=a[i];
   while(j>=0 && a[j]>elt)
    {
      a[j+1]=a[j];
      j--;
    }
   a[++j]=elt;
  }
}
 end=clock();
//output
 printf("Sorted set is:\n");
 for(i=0;i<n;i++)
  printf("%d ",a[i]);
 printf("%f",(float)(end-start)/CLOCKS_PER_SEC/1000000);
}

 
