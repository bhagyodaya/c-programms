#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    swap(x,y);
    return 0;
}
void swap(int a,int b)
{
    a=a^b;
    b=a^b;
    a=a^b;

    printf(" value 1:%d",a);
    printf(" value 2:%d",b);
}