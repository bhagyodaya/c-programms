#include<stdio.h>
#include<math.h>
// function for squareroot
void square(void)
{
    int x,z;
    printf("enter 1 number:");
    scanf("%d",&x);
    z=sqrt(x); 
    printf("square root of %d is %d",x,z);
}
int main()
{
    square();
    return 0;
}