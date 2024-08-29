#include<stdio.h>
int main()
{
    int n,i=1;
    int fact=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Factorial calculation = ");
    while(i<=n)
    {
        if(i==n)
        {
            printf("%d",i);
        }
        else
        {
            printf("%d x ",i);
        }
        fact = fact*i;
        i++;
    }
    printf("\nFactorial of %d is : %d",n,fact);
    return 0;
}