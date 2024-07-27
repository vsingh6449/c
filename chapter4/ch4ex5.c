#include<stdio.h>
int main()
{
    int ch;
    printf("Enter the character from the keyboard = ");
    scanf("%d",&ch);
    if(ch>=65&&ch<=90)
    {
        printf("The character is Upper case letter");
    }
    if(ch>=97&&ch<=122)
    {
        printf("The character is Lower case letter");
    }
    if(ch>=48&&ch<=57)
    {
        printf("The character is digit");
    }
    if((ch>=0&&ch<48)||(ch>57&&ch<65)||(ch>90&&ch<97)||(ch>122))
    {
        printf("The character is a special symbol");    
    }
    return 0;
}