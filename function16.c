#include<stdio.h>
#include<math.h>
// function for printing of Table
void table(void)
{
    int x,z,i;
    printf("enter number of which you want table:");
    scanf("%d",&x);
    for(i=0;i<=10;i++)
    {
        printf("%d*%d=%d\n",x,i,x*i);
    }
   
}
int main()
{
    table();
    return 0;
}