#include<stdio.h>
void main()
{
    int x,y;
    printf("######### c programs for control Statements ############");
    printf("\n\nPut 1 value:");
    scanf("%d",&x);
    printf("\n\nPut 2 value");
    scanf("%d",&y);
    if(x>y)
    {
    printf("%d",x);
    printf("number is greater");
    }
    else
    {
    printf("%d",y);
    printf("number is greater");
    }
}