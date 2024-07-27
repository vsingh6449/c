#include<stdio.h>
int main()
{
    float far,cel;
    printf("Enter temp in far   = ");
    scanf("%f",&far);
    cel=(far-32)*5.0/9;
    printf("===========================\n");
    printf("Temp in Cel         = %.2f",cel);
    return 0;
}