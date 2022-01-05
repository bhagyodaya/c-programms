#include<stdio.h>
// function for substraction
void sub(void)
{
    int x,y,z;
    printf("enter 1 number:");
    scanf("%d",&x);
    printf("enter 2 number:");
    scanf("%d",&y);
    z=x-y;  
    printf("substraction of %d and %d is %d",x,y,z);
}
int main()
{
    sub();
    return 0;
}