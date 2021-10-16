#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,z,area,s;
    printf("C-program to find area of triangle by herons formula");
    printf("\nvalue of x: ");
    scanf("%f",&x);
    printf("\nvalue of y: ");
    scanf("%f",&y);
    printf("\n value of z: ");
    scanf("%f",&z);

    s=x+y+z/2;
    area= sqrt(s*(s-x)*(s-y)*(s-z));
    
    printf("area of triangle: \n");
    printf("%f",area);
    
    return 0;
}
