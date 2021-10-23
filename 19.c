#include<stdio.h>
int main()
{
    int age;
    printf("\n\n**************C-program which to check your age category***********");
    printf("\nEnter Your age: ");
    scanf("%d",&age);
    printf("\nYou Have Enter %d as your age ",age);
    if(age<=12){
        printf("\n!!You comes under the child category!!");
        printf("\n\n---Thanks for using---");
    }
    else if(13<=age>=18){
        printf("\n\n!!you comes under the adolenscence category !!");
        printf("\n\n---Thanks for using---");

    }
    else if (19<=age<=59){
        printf("\n\n!!You comes under the adult category!!");
        printf("\n\n---Thanks for using---");
    }
    else{
        printf("\n!!You comes under the senior adult category!!");
        printf("\n\n---Thanks for using---");
    }
    return 0;
}
