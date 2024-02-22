// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,i;
    float countp=0,countn=0,countz=0,p,ne,z;
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
        if(a[i]>0)
        countp++;
        else if(a[i]<0)
        countn++;
        else
        countz++;
    }
    p=countp/n;
    ne=countn/n;
    z=countz/n;
    printf("%f\n",p);
    printf("%f\n",ne);
    printf("%f\n",z);
    
   
  
  
    return 0;
}

