#include <stdio.h>

int main()
{
   int n,i,j,temp,l,count=1;
   //printf("Enter the no of elements in the array:");
   scanf("%d",&n);
   int a[n];
   //printf("Enter the array:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   l=a[0];
   for(i=1;i<n;i++)
   {
       if(a[i]>l)
       {
           l=a[i];
           count=1;
       }
       else if(a[i]==l)
       {
           count++;
       }
   }
   //l=a[n-1];
  
   printf("%d",count);
    
    return 0;
}

