#include <stdio.h>

int main()
{
    int i,j,n,k,count=0;
    //printf("Enter the no of terms:");
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    //printf("Enter the value:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //printf("Enter the sum value:");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j&&((a[i]+a[j])%k==0))
            {
                count++;
            }
        }
    }
    printf("%d",count);

    return 0;
}

