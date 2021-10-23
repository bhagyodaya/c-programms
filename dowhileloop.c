#include<stdio.h>
void main()
{
    int num,index=0;
    printf("*****************C program for Do while Loop******************\n\n");
    printf("Enter a number: \n");
    scanf("%d",&num);

    do
    {
        printf("%d\n",index+1);
        index = index + 1;

    }while(index<num);
}