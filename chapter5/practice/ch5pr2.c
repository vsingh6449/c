#include <stdio.h>
int main()
{
    int n, i = 2, count = 0;
    printf("Enter a number = ");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
            count++;
        i++;
    }
    if (count == 0)
        printf("Prime");
    else
        printf("None Prime");
    return 0;
}