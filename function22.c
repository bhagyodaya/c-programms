#include<stdio.h>
// function for check either the entered character is vowel or not
void vowel(void)
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

    }}
    int main()
    {
        vowel();
        return 0;
    }