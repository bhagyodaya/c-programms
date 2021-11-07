#include<stdio.h>
void main()
{
    int x,r,reverse=0;
    printf("$$$$$$$$$$$$$$ C-Program for Reversing a number $$$$$$$$$$$$$$$$");
    printf("\n\nEnter Value that to be reversed: ");
    scanf("%d",&x);
    while(x!=0)
    {
        r=x%10;
        reverse=reverse*10+r;
        x=x/10;
    }
    printf("\nReversed number: %d",reverse);

}