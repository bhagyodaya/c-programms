#include<stdio.h>
int main()
{
    int x,y;
    printf("C-program to swap to numbers");
    printf("\nvalue of x: ");
    scanf("%d",&x);
    printf("\nvalue of y: ");
    scanf("%d",&y);

    x=x+y;
    y=x-y;
    x=x-y;
    
    printf("\nvalue of x: %d",x);
    printf("\nvalue of y: %d",y);
    return 0;
}
