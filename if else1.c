#include<stdio.h>
int main()
{
    int age;
    printf("\n\n**************C-program which will Tell that you can vote or not***********");
    printf("\nEnter Your age: ");
    scanf("%d",&age);
    printf("\nYou Have Enter %d as your age ",age);
    if(age>=18){
        printf("\n!!You are eligible for vote!!");
        printf("\n\n---Thanks for using---");
    }
    else if(age>10){
        printf("!!\n\nyou are a teenager you not eligible for vote!!");
        printf("\n\n---Thanks for using---");

    }
    else{
        printf("\n!!You are not eligible for vote!!");
        printf("\n\n---Thanks for using---");
    }
    return 0;
}
