#include<stdlib.h>
#include <stdio.h>

int main()
{
   int n,i,j,sum1=0,sum2=0,d;
   //printf("Enter the no of rows or column in the square matrix:");
   scanf("%d",&n);
   int a[n][n];
   //printf("Enetr the matrix:");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);
       }
       
   }
   //checking
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(i==j)
           {
               sum1=sum1+a[i][j];
           }
       }
       
   }
for(i=0,j=n-1;i<n&&j>=0;i++,j--)
   {
       
       sum2=sum2+a[i][j];
       
       
   }
   
   //printf("sum1=%d",sum1);
   //printf("sum2=%d",sum2);
   d=sum1-sum2;
   printf("%d",abs(d));

    return 0;
}
