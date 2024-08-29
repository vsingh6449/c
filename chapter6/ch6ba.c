#include<stdio.h>
int main()
{
    int a,i,n=1,j;
    printf("Enter the no. of table : ");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",a,i,a*i);
    }
    return 0;
}