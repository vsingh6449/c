#include<stdio.h>
#include<math.h>
int main()
{
    int decimal=0,octal=0,rem,i=0;
    printf("Enter a decimal number : ");
    scanf("%d",&decimal);
    while(decimal>0)
    {
        rem = decimal%8;
        octal = octal +rem*pow(10,i++);
        decimal/=8;
    }
    printf("Equivalent octal number is : %d\n",octal);
    return 0;
}