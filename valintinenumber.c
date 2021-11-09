#include<stdio.h>
void main()
{
    int x,y;
    printf(" &&&&&&&&&& Cprogram to find the valintine number &&&&&&&&&&&&&\n");
    printf(" VAlintine number are those whose total of sum and xor are equal\n");
    printf("Enter the 1 value: ");
    scanf("%d",&x);
    printf("Enter the 2 value: ");
    scanf("%d",&y);

    
        if((x+y)==(x^y))
        printf(" this is a valintine Number");
        else
        printf(" this is not a valintine number");
    
}