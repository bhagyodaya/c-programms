#include<stdio.h>
int main()
{
    float x,y,z,a;
    printf("C-program to compute simple interest");
    printf("\nInitial balance: ");
    scanf("%f",&x);
    printf("\nAnnual Interest Rate: ");
    scanf("%f",&y);
    printf("Time(in years): ");
    scanf("%f",&z);
    a=x*(1+y*z);
    printf("Final amount: \n");
    printf("%f",a);
    return 0;
}
