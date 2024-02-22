
#include <stdio.h>

int main()
{
    int n,i;
   // printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    int a[n];
    //printf("Enter the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[5];
    for(i=0;i<5;i++)
    {
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        switch(a[i])
        {
                case 1:b[0]++;
                break;
                case 2:b[1]++;
                break;
                case 3:b[2]++;
                break;
                case 4:b[3]++;
                break;
                case 5:b[4]++;
                break;
        }
    }
    int max=b[0],pos;
    for(i=0;i<5;i++)
    {
        if(b[i]>max)
        {
            max=b[i];
            pos=i;
        }
    }
    int type;
    switch(pos)
    {
                case 0:type=1;
                break;
                case 1:type=2;;
                break;
                case 2:type=3;
                break;
                case 3:type=4;
                break;
                case 4:type=5;
                break;    
    }
    printf("%d",type);
    
    return 0;
}
