#include<stdio.h>
void main()
{
    int i,j,count=0;
    char x[100];
    puts("enter:");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        count++;

    }
    for(i=count-1;i>=0;i--)
    {
        printf("%c",x[i]);
    }
}