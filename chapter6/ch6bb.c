#include <stdio.h>
int main()
{
    int i, y;
    float x, result;
    printf("The approximation level of intelligence according to the data\n");
    for (y = 1; y <= 6; y++)
    {
        for (x = 5.5; x <= 12.5; x += 0.5)
        {
            result = 2 + (y + 0.5 * x);
            printf("y=%d, x=%.2f, i=%.2f\n", y, x, result);
        }
    }
    return 0;
}