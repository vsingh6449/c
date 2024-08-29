#include <stdio.h>
#include <math.h>
int main()
{
    int decimal, binary = 0, rem, i = 0;
    printf("Enter a decimal no.= ");
    scanf("%d", &decimal);
    while (decimal > 0)
    {
        rem = decimal % 2;
        decimal = decimal / 2;
        binary = binary + rem * pow(10, i++);
    }
    printf("Binary no.= %d", binary);
    return 0;
}