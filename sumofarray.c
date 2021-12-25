#include<stdio.h>
void main()
{
    int a;
    printf("please enter the length of array:");
    scanf("%d",&a);
    int x[a][a],i,j,y[a][a],z[a][a];
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&x[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&y[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
             z[i][j]=x[i][j]+y[i][j];
        }
    }
   
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            printf("%d",z[i][j]);
        }
        printf("\n");
    }

}