#include<stdio.h>
void main()
{
    int x,y,z;
    printf("######### c programs for control Statements ############");
    printf("\n\nPut 1 value:");
    scanf("%d",&x);
    printf("\n\nPut 2 value");
    scanf("%d",&y);
    printf("Put 3 value:");
    scanf("%d",&z);
    if(x>y && x>z)
    {
    printf("%d",x);
    printf("number is greater");
    }
    if(y>x && y>z)
    {
    printf("%d",y);
    printf("number is greater");
    }
    if(z>x && z>y)
    {
        printf("%d",z);
        printf("number is greater");
    }

}