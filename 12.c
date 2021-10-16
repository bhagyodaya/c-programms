#include<stdio.h>
int main()
{
    float x,y,z;
    printf("C-program to find area of rectangle");
    printf("\nvalue of one side: ");
    scanf("%f",&x);
    printf("\nvalue of second side: ");
    scanf("%f",&y);
    z=x*y;
    printf("Area: \n");
    printf("%f",z);
    return 0;
}
