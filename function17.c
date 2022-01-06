#include<stdio.h>

// function for printing of pattern
void pat(void)
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=i;j++)
        {
        printf("*");
        }
        printf("\n");
    }
   
}
int main()
{
    pat();
    return 0;
}