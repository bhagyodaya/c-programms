#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
float num1,num2,result,result1;
char op;
printf("For Addition: '+' || For Substraction: '-'\nFor multiply: '*' || For Division: '/'\nFor Squareroot Function: '@'  \nFor cuberoot function: '#'\nFor log function: '!'");
printf("\n\n*************CALCULATOR************  ");
while(1)
{
    printf("\nEnter the operator:");
    scanf("%c",&op);
switch(op)
{
    case '+':
    printf("Enter the 1 digit:");
    scanf("%f",&num1);
    printf("Enter the 2 digit:");
    scanf("%f",&num2);
    result = num1+num2;
    printf("\nResult of Sum: ");
    printf("%3.1f",result);
    break;

    case '-':
    printf("Enter the 1 digit:");
    scanf("%f",&num1);
    printf("Enter the 2 digit:");
    scanf("%f",&num2);
    result = num1-num2;
    printf("\nResult of Sunstraction: ");
    printf("%3.1f",result);
    break;

    case '*':
    printf("Enter the 1 digit:");
    scanf("%f",&num1);
    printf("Enter the 2 digit:");
    scanf("%f",&num2);
    result = num1*num2;
    printf("\nResult of multiplication: ");
    printf("%f",result);
    break;

    case '/':
    printf("Enter the 1 digit:");
    scanf("%f",&num1);
    printf("Enter the 2 digit:");
    scanf("%f",&num2);
    result = num1/num2;
    printf("\nResult of Divison: ");
    printf("%3.1f",result);
    break;
    case'@':
    printf("Enter the digit:");
    scanf("%f",&num1);
    result = sqrt(num1);
    printf("%3.1f",result);
    break;
    case'#':
    printf("Enter the digit:");
    scanf("%f",&num1);
    result = cbrt(num1);
    printf("%3.1f",result);
    break;
    case'!':
    printf("Enter the digit:");
    scanf("%f",&num1);
    result = log10(num1);
    printf("%3.1f",result);
    break;
    case'&':
    printf("Enter the digit:");
    scanf("%f",&num1);
    result = log(num1);
    printf("%3.1f",result);
    break;
    case'$':
    printf("Enter the digit:");
    scanf("%f",&num1);
    result = sin(num1* 3.14/180);
    result1 = sin(num1);
    printf("Result in degree: %f",result);
    printf("\n Result in radian: %f",result1);
    break;
    case'`':
    printf("Enter the digit:");
    scanf("%f",&num1);
    result = cos(num1* 3.14/180);
    result1 = cos(num1);
    printf("Result in degree: %f",result);
    printf("\n Result in radian: %f",result1);
    break;
    case'_':
    printf("Enter the digit:");
    scanf("%f",&num1);
    result = tan(num1* 3.14/180);
    result1 = tan(num1);
    printf("\nResult in degree: %f",result);
    printf("\n Result in radian: %f",result1);
    break;
    case'~':
    printf("Enter the digit:");
    scanf("%f",&num1);
    result = num1*num1;
    printf("Result of square is %f",result);
    break;
    case'^':
    printf("Enter the Digit:");
    scanf("%f",&num1);
    result = pow(num1,3);
    printf("Result of cube is %f",result);
    break;
    case'=':
    printf("Enter the Base:");
    scanf("%f",&num1);
    printf("Enter the power:");
    scanf("%f",&num2);
    result = pow(num1,num2);
    printf("The base %0.1f with power %0.1f is %0.1f:",num1,num2,result);
    break;
    
    case'a':
    exit(0);
    
    //default :

    //printf("\nPlease enter the valid operator");
}

}
}
