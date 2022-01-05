#include<stdio.h>
void circum(void)
{
    int x,y;
    printf("Radius:");
    scanf("%d",&x);
    y=2*3.14*x;
    printf("%d",y);
    
}
void area(void)
{
    int x,z;
    printf("\nRadius:");
    scanf("%d",&x);
    z= 3.14*x*x;
    printf("%d",z);
    
}
int main()
{
    circum();
    area();
    return 0;
}