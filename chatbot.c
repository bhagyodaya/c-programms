#include<stdio.h>
#include<string.h>
char input[128];
void main()
{
    int a,b,c;
    while(1)
    {
        gets(input);
        if(strcmp(input,"hi")==0)
        {
            printf("\t\t\t\tHello sir i am Harry your Personal Assistant");
        }
        else if(strcmp(input,"Hi")==0)
        {
            printf("\t\t\t\tHello sir i am Harry your Personal Assistant");
        }
        else if(strcmp(input,"HI")==0)
        {
            printf("\t\t\t\tHello sir i am Harry your Personal Assistant");
        }
        else if(strcmp(input,"Please entertain me")==0)
        {
            printf("\t\t\t\tCan i entertain you with jokes or something else");
        } 
        else if(strcmp(input,"Please entertain")==0)
        {
            printf("\t\t\t\tCan i entertain you with jokes or something else");
        } 
        else if(strcmp(input,"entertain me")==0)
        {
            printf("\t\t\t\tCan i entertain you with jokes or something else");
        } 
        else if(strcmp(input,"please entertain me")==0)
        {
            printf("\t\t\t\tCan i entertain you with jokes or something else");
        } 
        else if(strcmp(input,"please entertain ")==0)
        {
            printf("\t\t\t\tCan i entertain you with jokes or something else");
        } 
        else if(strcmp(input,"something else")==0)
        {
            printf("\t\t\t\tPlease tell me to do for you ");
        }
        else if(strcmp(input,"else")==0)
        {
            printf("\t\t\t\tPlease tell me to do for you");
        }
        else if(strcmp(input,"jokes")==0)
        {
            printf("\t\t\t\t\tYes money can not buy a\n \t\t\t\t\thappiness but it is much \n \t\t\t\t\tmore comfortable to cry \n \t\t\t\t\tin BMW then on a bike\t\t\t\t\t");
            printf("\n\n\t\t\t\t\tSome more :-)\t\t\t\t\t");
            printf("\n\n\t\t\t\t\twife: had your lunch\n\t\t\t\t\thusband: had your lunch\n\t\t\t\t\twife: i am asking you\n\t\t\t\t\thusband: i am asking you\n\t\t\t\t\twife: you coping me\n\t\t\t\t\thusband: you coping me\n\t\t\t\t\twife: lets go for shoping\n\t\t\t\t\thusband: yes i had my lunch");
            printf("\n\n\t\t\t\t\tAge10:I want to be pilot\n\t\t\t\t\tAge15:I want to be scientist\n\t\t\t\t\tAge20:I want to be Engineer\n\t\t\t\t\tAge25:I want to be kid again ");
            printf("\n\n\t\t\t\t\tFather to son: Whenever i beat you,\n\t\t\t\t\t\t\tyou do not annoyed,\n\t\t\t\t\t\t\t how would you control\n\t\t\t\t\t\t\tyour anger\n\n\t\t\t\t\t son to father: i start cleaning the toilet,\n\t\t\t\t\t\t\twith your toothbrush. ");
        }
         else if(strcmp(input,"can you do calculation for me")==0)
        {
            printf("\t\t\t\twhat type of calculation?");
        }
         else if(strcmp(input,"Addition")==0)
        {
            printf("\t\t\t\t1 digit:");
            scanf("%d",&a);
            printf("\t\t\t\t2 digit:");
            scanf("%d",&b);
            c=a+b;
            printf("Addition of %d and %d is %d",a,b,c);
            }
            else if(strcmp(input,"addition")==0)
        {
            printf("\t\t\t\t1 digit:");
            scanf("%d",&a);
            printf("\t\t\t\t2 digit:");
            scanf("%d",&b);
            c=a+b;
            printf("\t\t\t\tAddition of %d and %d is %d",a,b,c);
            }
            else if(strcmp(input,"sum")==0)
        {
            printf("\t\t\t\t1 digit:");
            scanf("%d",&a);
            printf("\t\t\t\t2 digit:");
            scanf("%d",&b);
            c=a+b;
            printf("\t\t\t\tAddition of %d and %d is %d",a,b,c);
            }
            else if(strcmp(input,"substraction")==0)
        {
            printf("\t\t\t\t1 digit:");
            scanf("%d",&a);
            printf("\t\t\t\t2 digit:");
            scanf("%d",&b);
            c=a-b;
            printf("\t\t\t\tsubstraction of %d and %d is %d",a,b,c);

        }
 
    }

}