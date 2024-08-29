#include<stdio.h>
int main()
{
    unsigned char n=1;
    while(n<=254)
    {
        printf("%d = %c\n",n,n);
        n++;
    }
    return 0;
}