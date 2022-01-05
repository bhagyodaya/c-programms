#include<stdio.h>
// function for addition
void sum(void)
{
    int x,y,z;
    printf("enter 1 number:");
    scanf("%d",&x);
    printf("enter 2 number:");
    scanf("%d",&y);
    z=x+y;  
    printf("Addition of %d and %d is %d",x,y,z);
}
int main()
{
    sum();
    return 0;
}