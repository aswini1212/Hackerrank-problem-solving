#include <stdio.h>
int* calculate(int a[],int b[]);
int main() {
    int n,i,a[3],b[3];
    int* c;
    //printf("Enter the array of Alice:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    //printf("Enetr the array of Bob:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    c=calculate(a,b);
    printf("%d %d",c[0],c[1]);
    
  
    return 0;
}
int* calculate(int a[],int b[])
{
    static int c[2]={0,0},i;
    for(i=0;i<3;i++)
    {
        if(a[i]!=b[i])
        {
        if(a[i]>b[i])
        {
            c[0]++;
        }
        else
        {
            c[1]++;
        }
        }
    }
    return c;
}
