#include <stdio.h>

int main() {
    int n,i,r;
    //printf("Enter the no of elemets in the array");
    scanf("%d",&n);
    int a[n];
    //printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=38)
        {
            r=a[i]%10;
            
            if(5-r==1||10-r==1)
            a[i]=a[i]+1;
            else if(5-r==2||10-r==2)
            a[i]=a[i]+2;
            
            
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
    
   
