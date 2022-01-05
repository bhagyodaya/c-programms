#include<stdio.h>
void evenodd(void)
{
    int x;
    printf("enter the number:");
    scanf("%d",&x);
    if(x%2==0)
    printf("Even Number ");
    else
    printf("Odd number");
}
int main()
{
    evenodd();
    return 0;
}