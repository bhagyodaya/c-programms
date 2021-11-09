#include<stdio.h>
void main()
{
    int x,a,b,reverse;
    printf("$$$$$$$$$$$$$$ C-Program for Reversing a number $$$$$$$$$$$$$$$$");
    printf("\n\nEnter Value that to be reversed: ");
    scanf("%d",&x);
    
    a=x%10;
    x=x/10;
    b=x%10;
    x=x/10;

    reverse=a*100+b*10+x*1;


    printf("\nReversed number: %d",reverse);

}
