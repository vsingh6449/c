#include<stdio.h>
int mul(int,int);
int findbig(int,int);
int main()
{
    int x,y,multiply;
    int big;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    multiply = mul(x,y);
    printf("Multiply = %d\n",multiply);
    big = findbig(x,y);
    printf("%d is big",big);    
    return 0;
}
int findbig(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int mul(int a,int b)
{
    int d;
    d=a*b;
    return(d);
}
