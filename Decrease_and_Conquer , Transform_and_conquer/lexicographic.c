live_lexicographic_order.c
Who has access
V
System properties
Type
C
Size
912 bytes
Storage used
912 bytesOwned by PES Institutions
Location
Programs - Prof Shylaja
Owner
Vibha(PES1UG19CS565) PESU S&H Student
Modified
Feb 17, 2021 by Vibha(PES1UG19CS565) PESU S&H Student
Opened
9:07 PM by me
Created
Feb 17, 2021
No description
Viewers can download
#include<stdio.h>
void sort(int a[10],int low,int n)
{
 for(int i=0;i<n-1;i++)
  for(int j=low;j<(n+low)-i-1;j++)
   if(a[j]>a[j+1])
    {
     int t=a[j];
        a[j]=a[j+1];
        a[j+1]=t;
    }
}
int main()
{
  int n,a[10],i;
 printf("enter n");
 scanf("%d",&n);
 printf("enter the number");
 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
 
//lexicographic order
 for(i=n-2;i>=0;i--)
  {
    if(a[i]<a[i+1])
      break;
   }
 if(i<0)
  printf("next number cannot be generated");
 else
  {
    int m=-1;
    for(int j=i+1;j<n;j++)
      {
         if(a[j]>a[i])
           {
             if(m==-1)  
               m=j;
             else
               if(a[j]<a[m])
                  m=j;
            }
       }
     int temp=a[i];
         a[i]=a[m];
         a[m]=temp;
   
     sort(a,i+1,n-(i+1));
    for(i=0;i<n;i++)
      printf("%d",a[i]);
  }
} 
 
