#include<stdio.h>
void main()
{
    int x,y;
    printf("######### c programs for Swaping number bitwise operators ##########\n        ########## XOR operator #############");
    printf("\n\nPut the value A:");
    scanf("%d",&x);
    printf("\n\n Put the value B:");
    scanf("%d",&y);

    x=x^y;
    y=x^y;
    x=x^y;
    printf("value A:");
    printf("%d",x);
    printf("\n\nValue B: ");
    printf("%d",y);
    
    

}