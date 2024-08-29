#include<stdio.h>
int main()
{
    int i=1,n,a,b,c;
    printf("Amstrong numbers btw 1 and 500 are : ");
    while(i<=500)
    {
        n=i;
        a=n%10;
        n/=10;
        b=n%10;
        n/=10;
        c=n;
        if(a*a*a+b*b*b+c*c*c==i)
        {
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}