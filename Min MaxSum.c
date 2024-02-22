#include <stdio.h>

int main()
{
    long int a[5],b[5],sum=0,i,j,temp;
   // printf("Enter the array:");
    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    }
    b[0]=a[1]+a[2]+a[3]+a[4];
    b[1]=a[0]+a[2]+a[3]+a[4];
    b[2]=a[0]+a[1]+a[3]+a[4];
    b[3]=a[1]+a[2]+a[0]+a[4];
    b[4]=a[1]+a[2]+a[3]+a[0];
    
    //acsending order
    for(j=0;j<5;j++)
    {
        for(i=j+1;i<5;i++)
        {
            if(b[i]<b[j])
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
            }
        }
    }
    
    printf("%ld %ld",b[0],b[4]);
    
    return 0;
}

