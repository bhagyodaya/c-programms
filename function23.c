#include<stdio.h>
// function to tell the number of days in entered number of month
void month(void)
{
     int x;
    printf("Enter the month:");
    scanf("%d",&x);
    switch(x)
     {
         case 1:
         case 3:
         case 5:
         case 7:
         case 8:
         case 10:
         case 12:
         printf("It is a month of 31 days");
         break;
         case 2:
         switch(x%4==0 && x%100==0)
         {
             case 1:
             printf("It is a month of 29 days");
             break;
             case 0:
             printf("It is a month of 28 days");
             break;
         }
         break;
         case 4:
         case 6:
         case 9:
         case 11:
         printf("It is month of 30 days");
         break;

    }
}
int main()
{
    month();
    return 0;
}