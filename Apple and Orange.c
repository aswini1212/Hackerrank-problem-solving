
#include <stdio.h>

int main()
{
    int s,t,a,b,m,n,i,j,counta=0,counto=0;
    //printf("Enter the value of s and t:");//position of sams house
    scanf("%d %d",&s,&t);
    //printf("Enter the value of a and b:");//position of apple and orange tree
    scanf("%d %d",&a,&b);
    //printf("Enter the value of m and n:");//no of oranges and apples
    scanf("%d %d",&m,&n);
    int a1[m],o[n],a2[m],o2[n];
    //printf("Enter the pposition of apples:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a1[i]);
    }
    //printf("Enter the position of oranges:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&o[i]);
    }
    for(j=0;j<m;j++)
    {
        a2[j]=a1[j]+a;
    }
    for(j=0;j<n;j++)
    {
        o2[j]=o[j]+b;
    }
    //counting the no of apples
    for(i=0;i<m;i++)
    {
        if(a2[i]>=s&&a2[i]<=t)
        {
            counta++;
        }
    }
    //counting the no of oranges
    for(i=0;i<n;i++)
    {
        if(o2[i]>=s&&o2[i]<=t)
        {
            counto++;
        }
    }
    printf("%d ",counta);
    printf("\n");
    printf("%d",counto);
    return 0;
}
