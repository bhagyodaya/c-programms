#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
void main()
{
    int size,i,a,c;
    printf("length of array:");
    scanf("%d",&size);
    int x[size];
    for(i=0;i<size-1;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("value to insert:");
    scanf("%d",&a);
    for(c=size-2;a<x[c];c--)
    {
        x[c+1]=x[c];
    }
    x[c+1]=a;
    for(i=0;i<size;i++)
    {
        printf("%d",x[i]);
    }

}