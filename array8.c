#include<stdio.h>
void main()
{
    int a;
    printf("please enter the length of array:");
    scanf("%d",&a);
    int row1=a,row2=a,col1=a,col2=a;
    int x[row1][col1],i,j,k,y[row2][col2],z[row1][col1];
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
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
             z[i][j]=0;
             for(k=0;k<col1;k++)
             {
                 z[i][j]=z[i][j]+x[i][k]*y[k][j];
             }
        }
    }
   
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d",z[i][j]);
        }
        printf("\n");
    }

}