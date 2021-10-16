#include<stdio.h>
int main()
{
    float x,v;
    printf("C-program to find volume of sphere");
    printf("\nvalue of radius: ");
    scanf("%f",&x);
    
    v=3.14*x*x*x*1.33;
    
    printf("volume of sphere: \n");
    printf("%f",v);
    
    return 0;
}
