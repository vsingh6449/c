#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter 1st angle of triangle= ");
    scanf("%d",&a);
    printf("Enter 2nd angle of triangle= ");
    scanf("%d",&b);
    printf("Enter 3rd angle of triangle= ");
    scanf("%d",&c);
    sum=a+b+c;
if(sum==180)
    {
    printf("This triangle is valid");
    }
else
{
    printf("This triangle is invalid");
}
    return 0;
}