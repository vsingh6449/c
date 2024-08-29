#include <stdio.h>
int main()
{
    int n = 1;
    while (n <= 300)
    {
        int i = 2, count = 0;
        while (i < n)
        {
            if (n % i == 0)
                count++;
            i++;
        }
        if (count == 0)
            printf("%d ", n);
        n++;
    }

    return 0;
}