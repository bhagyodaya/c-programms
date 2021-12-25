#include<stdio.h>
void main()
{
    int x,d1=0,d2=1,d3=0,d4=1;
    printf("How many elements to print of fiboncci series:");
    scanf("%d",&x);
    printf("%d,%d",d1,d2);
    while(d4<=(x-2))
    {
    d3=d1+d2;
    printf(",%d,",d3);
    d1=d2;
    d2=d3;
    d4++;
    
    


    }
    

}