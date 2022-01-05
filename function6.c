#include<stdio.h>
void sum(void)
{
    int x,y,z;
    printf("1 value:");
    scanf("%d",&x);
    printf("2 value:");
    scanf("%d",&y);

    z=x+y;
    printf("%d",z);
}
int main()
{
    sum();
    return 0;
}