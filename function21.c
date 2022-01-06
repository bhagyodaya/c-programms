#include<stdio.h>
// function to check entered number is greater among 3
void greater(void)
{
    int x,y,z;
    printf("Put 1 value:");
    scanf("%d",&x);
    printf("Put 2 value");
    scanf("%d",&y);
    printf("Put 3 value:");
    scanf("%d",&z);
    if(x>y && x>z)
    {
    printf("number %d is greater",x);
    }
    if(y>x && y>z)
    {
        printf("number %d is greater",y);
    }
    if(z>x && z>y)
    {
      printf("number %d is greater",z);
    }
}

    int main()
    {
        greater(); 
        return 0;
    }