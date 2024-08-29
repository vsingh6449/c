#include<stdio.h>
int main()
{
    
    int i,k;
    float f,sum=0;
    for(i=1;i<=7;i++)
    {
        k=i;
        f=1;
        while(k!=0)
        {
            f=f*k;
            k--;
        }
        sum=sum+i/f;
    }
    printf("Sum of series : %f",sum);

    return 0;
}