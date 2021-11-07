#include <stdio.h>
void printfstar(int n)
{
    for(int i=0;i < n;i++)
    {
        printf("%c",'*');
    }

}
void main()
{
    int a;
    printf("How many stars you have to print: ");
    scanf("%d",&a);
    printfstar(a);
}
