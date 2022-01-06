#include<stdio.h>
// function to tell the entered number is armstrong or not
void armstrong(void)
{
    int a,b,c,sum=0,d;
   printf("Enter the number:");
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
int main()
{
    armstrong();
    return 0;
}