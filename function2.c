#include<stdio.h>
#include<string.h>
void main()
{
    puts("two string connecting(concatination)");
     char x[100],y[100];
    gets(x);
    gets(y);
    strcat(x,y);
    puts(x);
}