#include<stdio.h>
void main()
{
    int x;
    printf(" !!!!!!!!!!! C program to check wheather entered no. is +ve -ve or Zero by switch case only !!!!!!!!!!!!!!\n ");
    printf(" Entered the Number: ");
    scanf("%d",&x);
    switch(x>0)
    {
    case 1:
    printf("It is a positive number");
    break;
    case 0:switch(x<0)
    {
    case 1:
    printf("It is a negative number");
    break;
    case 0:
    printf("It is a zero");
    break;
    }
    }
}