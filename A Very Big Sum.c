#include <stdio.h>

int main() {
    int n,i;
    long int s=0;
    //printf("Enter the no of elements:");
    scanf("%d",&n);
    int a[n];
    //printf("Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%ld",s);
    
  
  
    return 0;
}
