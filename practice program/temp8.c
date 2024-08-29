#include <stdio.h>
int main()
{
    int i, j, k, a, b, c;
    int row = 11;
    int num = 1;
    if (row >= 10)
    {
        a = row - 2;
        b = row + 3;
        c = row - 5;
    }
    else if (row >= 7)
    {
        a = row - 2;
        b = row + 3;
        c = row - 3;
    }
    else
    {
        a = row - 1;
        b = row + 2;
        c = row - 2;
    }
    for (i = 1; i <= row * 2; i++)
    {
        if (num % 2 != 0)
        {
            for (k = 1; k <= row * 2 - i; k++)
            {
                printf(" ");
            }
            for (j = 1; j <= num; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        num++;
    }
    for (i = 1; i <= row + 2; i++)
    {

        for (j = 1; j <= row * 2; j++)
        {
            if (j >= a && j <= b && i >= c)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}