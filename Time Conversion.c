#include <stdio.h>

int main()
{
   char str[100],str1[100];
   int h1,h2,i;
   //printf("Enter the data in 12 hrs format(hh:mm:ssAM/PM):");
   scanf("%[^\n]",str);
   if(str[8]=='A'&&str[0]!='1'&&str[1]!='2')
   {
       
       for(i=0;i<8;i++)
       printf("%c",str[i]);
   }
   else if(str[8]=='A'&&str[0]=='1'&&str[1]=='2')
   {
       str[0]='0';
       str[1]='0';
       
       for(i=0;i<8;i++)
       printf("%c",str[i]);
   }
   else if(str[8]=='P'&&str[0]=='1'&&str[1]=='2')
   {
       
       for(i=0;i<8;i++)
       printf("%c",str[i]);
   }
   else if(str[8]=='P')
   {
       h1=(int)str[0];
       h2=(int)str[1];
       h2=h2+2;
       h1=h1+1;
       str[0]=(char)h1;
       str[1]=(char)h2;
       for(i=0;i<8;i++)
       printf("%c",str[i]);
   }
   
   
   
    return 0;
}
