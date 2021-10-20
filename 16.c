#include<stdio.h>
void main()
{
    int x,y,z,a;
    printf("Enter 1 value: ");
    scanf("%f",&x);
    printf("Enter 2 value: ");
    scanf("%f",&y);
    printf("Enter 3 value: ");
    scanf("%f",&z);
    printf("Enter 4 value: ");
    scanf("%f",&a);
    (1>2 && 1>3 && 1>4)?printf("1 is greater"):(2>1 && 2>3 && 2>4)?printf("2 is greater"):(3>1 && 3>2 && 3>4)?printf("3 is greater"):printf("4 is greater");

}
