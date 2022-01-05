#include<stdio.h>
// function for multiplication
void mul(void)
{
    int x,y,z;
    printf("enter 1 number:");
    scanf("%d",&x);
    printf("enter 2 number:");
    scanf("%d",&y);
    z=x*y;  
    printf("Multiplication of %d and %d is %d",x,y,z);
}
int main()
{
    mul();
    return 0;
}