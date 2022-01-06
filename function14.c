#include<stdio.h>
#include<math.h>
// function for cuberoot
void cube(void)
{
    int x,z;
    printf("enter 1 number:");
    scanf("%d",&x);
    z=cbrt(x); 
    printf("cuberoot of %d is %d",x,z);
}
int main()
{
    cube();
    return 0;
}