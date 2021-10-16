#include<stdio.h>
int main()
{
    int x,y,z,a,b;
    printf("C-program to find area of trapezium");
    printf("\nvalue of 1 base: ");
    scanf("%d",&x);
    printf("\nvalue of 2 base: ");
    scanf("%d",&y);
    printf("value of height: ");
    scanf("%d",&z);

    a=(x+y)/2;
    b=a*z;
    
    printf("Area of trapezium: \n");
    printf("%d",b);
    
    return 0;
}
