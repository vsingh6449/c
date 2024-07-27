#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    temp=a;
    a = b;
    b = temp;
    printf("nterchange value of a = %d",a);
    printf("interchange value of b = %d",b);
     return 0;
}