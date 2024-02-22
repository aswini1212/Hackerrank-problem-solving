#include <stdio.h>
int simpleArraySum(int a[],int n);
int main() {
   int n,i,s;
   //printf("enter the elements in the array:");
   scanf("%d",&n);
   int a[n];
   //printf("Enetr the elements:\n");
   for(i=0;i<n;i++)
   {
       scanf("%d\t",&a[i]);
   }
   s=simpleArraySum(a,n);
   printf("%d",s);
    return 0;
}
int simpleArraySum(int a[],int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
    
}
