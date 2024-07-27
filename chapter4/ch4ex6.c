#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the side of a = ");
    scanf("%d",&a);
    printf("Enter the side of b = ");
    scanf("%d",&b);
    printf("Enter the side of c = ");
    scanf("%d",&c);
    if(a<c+b || b<a+c || c<a+b )
    {
        printf("This is triangle is  valid");
    }
    else
    {
        printf("This is triangle is not valid");
    }
    return 0;
}