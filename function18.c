#include<stdio.h>
// function to find maximum between two number
void num(void)
{
    int n,m;
    printf("Enter the 1 digit:");
    scanf("%d", &n);
    printf("Enter the 2 digit:");
    scanf("%d", &m);
    if (n < m)
        printf("%d is greater",m);
        else
        printf("%d is greater",n);
}

    int main()
    {
        num(); //function call
        return 0;
    }