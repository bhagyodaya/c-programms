#include <stdio.h>
void main()
{
   int a,b,c,sum=0,d;
   printf("enter");
   scanf("%d",&a);
   d=a;
   while(a>0)
   {
       b=a%10;
       c=b*b*b;
       sum=sum+c;
       a=a/10;

   }
    if(d==sum)
    {
        printf("Armstrong no.");
    }
    else
    {
        printf("not armstrong no.");
    }
} 