#include<stdio.h>
void main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=5;col>=row;col--)
        {
            if(row==col)
            printf("*");
            else
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            if(row==col)
            printf("*");
            else
            printf(" ");
        }
        
            printf("\n");

    }
    for(row=1;row<=5;row++)
    {
                for(col=1;col<=row;col++)
        {
            if(row==col)
            printf("*");
            else
            printf(" ");
        }
              for(col=5;col>=row;col--)
        {
            if(row==col)
            printf("*");
            else
            printf(" ");
        }

  
            printf("\n");

    }
}