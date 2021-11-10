#include<stdio.h>
void main()
{
    char x;
    printf("Enter the charcter:");
    scanf("%c",&x);
    switch(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
     {
         case 1:
         printf("It is a vowel");
         break;
         case 0:
         printf("It is a consonants");
         break;

    }
}
