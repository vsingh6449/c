#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value= ");
    scanf("%d",&a);
if(a<0)
    {
        a=a*(-1);
    }
printf("Absolute value= %d",a);
    return 0;
}