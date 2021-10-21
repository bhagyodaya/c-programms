#include<stdio.h>
#include<conio.h>
void main()
{
float num1,num2,result;
char op;
printf("\n\n*************CALCULATOR************  ");
printf("\n\nEnter the first number: ");
scanf("%f",&num1);
printf("\nEnter the second number: ");
scanf("%f",&num2);
printf("\nPlease Enter the Operator: ");
scanf(" %c",&op);

switch(op)
{
    case '+':
    result = num1+num2;
    printf("\nResult of Sum: ");
    printf("%3.1f",result);
    break;

    case '-':
    result = num1-num2;
    printf("\nResult of Sunstraction: ");
    printf("%3.1f",result);
    break;

    case '*':
    result = num1*num2;
    printf("\nResult of multiplication: ");
    printf("%3.1f",result);
    break;

    case '/':
    result = num1/num2;
    printf("\nResult of Divison: ");
    printf("%3.1f",result);
    break;

    default :
    printf("\nPlease enter the valid operator");

}
getch();
}