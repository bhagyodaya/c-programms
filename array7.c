#include<stdio.h>
void main()
{
    int a,k=0;
    printf("enter the length of 2D array:");
    scanf("%d",&a);
    int x[a][a],i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
        scanf("%d",&x[i][j]);
        }
        printf("\n");
    }
    if(x[i][j]!=1)
    {
        k=0;
        
    }
    else{ k++;}
    if(k>0)
    printf("  identity matrix");
    else
    printf(" not Identity matrix");
}