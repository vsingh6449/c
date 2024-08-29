#include<stdio.h>
int main()
{
    int a,b,result=1;
    printf("Enter two numbers a : ");
    scanf("%d",&a);
    printf("Enter two numbers b : ");
    scanf("%d",&b);
    while(b>=1)
    {
        if(b==1)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d x ",a);
        }
        result = result*a;
        b--;
    }
    printf("\nResult = %d",result);
    return 0;
}