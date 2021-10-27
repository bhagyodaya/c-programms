#include<stdio.h>
void main()
{
    int x,y;
    printf("######### c programs for bitwise operators ##########\n ########### Right and Left shift operator use ########");
    printf("\n\nPut the value:");
    scanf("%d",&x);
    printf("Result:");
    x==(x>>1)<<1?printf("Entered number is even"):printf("Entered number is odd");
    

}