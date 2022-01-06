#include<stdio.h>
// function to check entered value is in power of 2 or not
void powerof2(void)
{
    int x,y;
    printf("\n\nPut the value:");
    scanf("%d",&x);
    printf("Result: ");
    (x&(x-1)!=0)?printf("not in power of 2"):printf(" in power of 2");
}

    int main()
    {
        powerof2(); 
        return 0;
    }