#include<stdio.h>
void main()
{
    int a;
    printf("Please enter the size of 2D array:");
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
    for(i=0;i<a;i++)
    {
        if(i%2==0)
        {
            
        for(j=0;j<a;j++)
        {
            printf("%d",x[i][j]);
        }
        }
        else{
            for(j=a-1;j>=0;j--)
        {
        
            printf("%d",x[i][j]);
        }
        } 
        printf("\n");
      
     
    }
    

}