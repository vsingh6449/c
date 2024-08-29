#include <stdio.h>
#include<math.h>
int main()
{
    int i;
    float result, temp, x;
    printf("Enter the value of x : ");
    scanf("%f", &x);
    result = (x - 1) / x;
    for (i = 2; i <= 7; i++)
    {
        temp = 0.5 * pow((x - 1) / x, i);
        result = result + temp;
    }
    printf("%f\n", result);
    return 0;
}