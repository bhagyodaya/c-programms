#include<stdio.h>
void main()
{
    int i,j,count=0;
    char x[100],y[100];
    puts("enter the sentence:");
    gets(x);
    gets(y);
    for(i=0;x[i]!='\0';i++)
    {
        count++;
    }
    for(i=count,j=0;y[j]!='\0';i++,j++)
    {
        x[i]=y[j];
    }
    x[i]='\0';
   /* for(i=0;x[i]!='\0';i++)
    {
    puts(x);
    }
*/ //printf("%s",x);
   for (i=0;x[i]!='\0';i++)
   {
       printf("%c",x[i]);
   }
   
    
  
}