#include<stdio.h>
int main()
{
    float salary,month,present,modulus,Paid,overtime,a,c,d,leaves,b,advance;
    printf("C-program to compute the salary of the workers in Industries");
    printf("\nwhats the salary: ");
    scanf("%f",&salary);
    printf("\nDays in month: ");
    scanf("%f",&month);
    printf("Present in month: ");
    scanf("%f",&present);
    printf("\n\novertime: ");
    scanf("%f",&overtime);
    printf("\nLeaves: ");
    printf("%3.1f",month-present);
    printf("\nAdvance:");
    scanf("%f",&advance);

    a=overtime/6;
    b=a-leaves;
    c=salary/month;
    d=c*b;
    modulus=salary/month;
    Paid=salary+d-advance;
    printf("To Paid: ");
    printf("%f",Paid);
    printf("\nOvertime: ");
    printf("%f",b);    
    return 0;
}
