#include<stdio.h>
void main()
{
    int x;
    printf("Enter the week:");
    scanf("%d",&x);
    switch(x)
     {
         case 1:
         printf("It is a sunday");
         break;
         case 2:
         printf("It is monday");
         break;
         case 3:
         printf("It is a tuesday");
         break;
         case 4:
         printf("It is a wednesday");
         break;
         case 5:
         printf("It is a thursday");
         break;
         case 6:
         printf("It is a Friday");
         break;
         case 7:
         printf("It is a Saturday");
         break;
     }
}
