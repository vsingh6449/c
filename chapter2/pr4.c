#include<stdio.h>
int main()
{
    int n,n1,n2,n3,n4,n5,revnum;
    printf("Enter any five digit no = ");
    scanf("%d",&n);
    n5=n%10;        // 5th digit     
    n=n/10;         //remaining digit
    n4=n%10;        //4th digit 
    n=n/10;         //remaining digit
    n3=n%10;        //3rd digit
    n=n/10;         //remaing digit
    n2=n%10;        //2nd digit
    n=n/10;         //remaing digit 
    n1=n%10;        //1st digit
    revnum = n5*10000+n4*1000+n3*100+n2*10+n1;
    printf("=================================\n");
    printf("The reversed number is  = %d",revnum);
    return 0;
}