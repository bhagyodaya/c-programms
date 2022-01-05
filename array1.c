#include<stdio.h>
void main()
{
    int y;
    printf("number:");
    scanf("%d",&y);
    int x[y],i,z;
    

    for(i=0;i<=y-1;i++)
    {
        scanf("%d",&x[i]);  
    }
    int f=0;
    printf("Number to search:");
    scanf("%d",&z);
    for(i=0;i<=y-1;i++)
    {
        if(x[i]==z)
        {
        f=1;
        break;
        }
    } 
    if(f==1)
    printf("found");
    else
    printf("not");
        
}