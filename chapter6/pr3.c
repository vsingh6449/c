#include <stdio.h>
int main()
{
    int i, j;
    float fact, sum = 0.0;
 w   for (i = 1; i <= 7; i++)
    {
        fact = 1.0;
        for (j = 1; j <= i; j++)
            fact = fact * j;
        sum = sum + i / fact;
    }
    printf("Sum of series : %f", sum);
    return 0;
}