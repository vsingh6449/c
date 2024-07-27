#include<stdio.h>
#include<math.h>
int main()
{
    double a = 7.070000,b=4.240000000,c=11.3100000000;
    a = floorf(a*100)/100;
    b = floorf(b*100)/100;
    c = floorf(c*100)/100;
    if(c == a+b)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}