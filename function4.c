#include<stdio.h>
void swap(void)
{
    int a,b;
    printf("1 value:");
    scanf("%d",&a);
    printf("2 value:");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d",a);
    printf("%d",b);
}
int main()
{
    swap();
    return 0;
}