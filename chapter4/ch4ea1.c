#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    // (ch >= 65 && ch <= 90) ? printf("lower case alphabet") :((ch >= 97 && ch<=122)? printf("Captal case"): printf("Invalid character"));
    (ch >=97 && ch <= 122) ? printf("lower case alphabet") :printf("Not a lower case alphabet");
        return 0;
}