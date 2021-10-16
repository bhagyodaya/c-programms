#include<stdio.h>
int main()
{
    float x,y,z,a;
    printf("C-program to compute quotient and remainder");
    printf("\nvalue of x: ");
    scanf("%f",&x);
    printf("\nvalue of y: ");
    scanf("%f",&y);
    z=x/y;
    
    printf("value of quotient: \n");
    printf("%f",z);
    
    return 0;
}
