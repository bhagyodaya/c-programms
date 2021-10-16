#include<stdio.h>
int main()
{
    float x,y,z;
    printf("C-program to find the perimeter of the rectangle");
    printf("\nvalue of one side: ");
    scanf("%f",&x);
    printf("\nvalue of second side: ");
    scanf("%f",&y);
    z=x+y;
    printf("perimeter of rectangle: \n");
    printf("%f",z);
    return 0;
}
