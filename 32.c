#include <stdio.h>
 
int main()
{
    int num,a,flag;
     
    printf("Enter an integer number: ");
    scanf("%d",&num);
     
    a=num;
    flag=0;
    /*check power of two*/
    while(a!=1)
    {
        if(a%2==0){
            flag=1;
            break;
        }
        a=a/2;
    }
  
    if(flag==1)
        printf("%d is a number that is the power of 2.",num);
    else
        printf("%d is not the power of 2.",num);
      
    return 0;
}
