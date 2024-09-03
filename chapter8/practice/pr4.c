#include<stdio.h>
int powerof(int);
int main()
{
    int a,b,powerof;
    printf("Enter the a = ");
    scanf("%d",&a);
    printf("Enter the b = ");
    scanf("%d",&b);
    powerof= fun(a,b);
    printf("Power of %d^%d = %d",a,b,powerof);
    return 0;
}
int fun(int x,int y)
{
    int t=1;
    for(int i=1;i<=y;i++)
    {
        t=t*x;
    }
    return (t);
}
