#include <stdio.h>
void num(void)
{
    int n;
    scanf("%d", &n);
    if (n < 0)
        printf("Negative number");
    else if (n > 0)
        printf("Positive number");
    else
        printf("Zero");
}

    int main()
    {
        num(); //function call
        return 0;
    }