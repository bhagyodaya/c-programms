#include<stdio.h>
int main()
{
    float x,y,z,a;
    printf("C-program to find diameter,circumference,area of circle");
    printf("\nRadius: ");
    scanf("%f",&x);
    z=2*x;
    y=2*3.14*x;
    a=3.14*x*x;
    printf("Diameter: \n");
    printf("%f",z);
    printf("\ncircumference: \n");
    printf("%f",y);
    printf("\nArea: \n");
    printf("%f",a);
    return 0;
}
