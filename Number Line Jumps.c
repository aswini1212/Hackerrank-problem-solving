#include <stdio.h>

int main()
{
    int x1,x2,v1,v2,i,j,flag=0,p1,p2;
    //printf("Enter the position and velocity of kangaroo 1:");
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    //printf("\nEnter the position and velocity of kangaroo 2:");
    //scanf("%d %d",&x2,&v2);
    for(i=0;i<=10000;i++)
    {
        x1=x1+v1;
        x2=x2+v2;
        if(x1==x2)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
    
    

    return 0;
}
