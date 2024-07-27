#include<stdio.h>
int main()
{
    int n,n1,n2,n3,n4,n5,sum,temp;
    printf("Enter the five digit no.= ");
    scanf("%d",&n);
    temp=n;
    n5=temp%10;
    temp=temp/10;
    n4=temp%10;
    temp=temp/10;
    n3=temp%10;
    temp=temp/10;
    n2=temp%10;
    temp=temp/10;
    n1=temp%10;
    temp=temp/10;
    sum=n5*10000+n4*1000+n3*100+n2*10+n1;
    printf("%d\n",sum);
    if(sum==n)
    {
        printf("This no. is equal to original no");
    }
    else
    {
        printf("This no. is not equal to original no");
    }
    return 0;
}