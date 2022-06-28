live_bs.c
Who has access
V
System properties
Type
C
Size
663 bytes
Storage used
663 bytesOwned by PES Institutions
Location
Programs - Prof Shylaja
Owner
Vibha(PES1UG19CS565) PESU S&H Student
Modified
Feb 2, 2021 by Vibha(PES1UG19CS565) PESU S&H Student
Opened
9:03 PM by me
Created
Feb 2, 2021
No description
Viewers can download
#include<stdio.h>
int bs(int a[50],int low,int high,int key);
int main()
{
 int n,a[50];
 int key,i;
 printf("enter n");
 scanf("%d",&n);
 printf("eneter the elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter the key element");
 scanf("%d",&key);
 int k=bs(a,0,n-1,key);
 if(k==-1)
  printf("unsuccessful search");
 else
 printf("successful %d",k);
}
int bs(int a[50],int low,int high,int key)
{
 int mid;
 if(low<=high)
   {
     mid=(low+high)/2;
    if(key==a[mid])
     return mid;
   else
    if(key<a[mid])
     return bs(a,low,mid-1,key);
    else
      return bs(a,mid+1,high,key);
    }
  return -1;
}

 
