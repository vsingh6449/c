#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a special symbol : ");
    scanf("%c", &ch);
    ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) ||(ch >= 123 && ch <= 127))?printf("Special Symbol"):printf("Not a Special symbol"); 
    return 0;
}