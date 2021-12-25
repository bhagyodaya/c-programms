#include<stdio.h>
void main()
{
    int row=5,col=5,x;
    printf("Enter the no to print star:");
    scanf("%d",&x);
    while(row==col)
    {
            printf("    *");
            col++;
        printf("\n");
    }
}