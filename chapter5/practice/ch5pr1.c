#include <stdio.h>
int main()
{
    int n, i = 1, count = 0;
    printf("Enter a Number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    {
        printf("prime");
    }
    else
    {
        printf("None prime");
    }
    return 0;
}