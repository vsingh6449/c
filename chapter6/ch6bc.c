#include <stdio.h>
int main()
{
    int sets = 10;
    double p, r, n, q, a;
    printf("Enter 10 sets of principal,annual interest rate,no. of year and compounding interest : \n");
    for (int i = 0; i < sets; i++)
    {
        printf("\nset %d:\n", i + 1);
        printf("Enter principal : ");
        scanf("%lf", &p);
        printf("Enter annual rate interest: ");
        scanf("%lf", &r);
        printf("Enter number of years: ");
        scanf("%lf", &n);
        printf("Enter compounding frequency: ");
        scanf("%lf", &q);
        r = r / 100;
        a = p * pow((1 + r / n), n * q);
        printf("Amount for set %d: %.2lf\n", i + 1, a);
    }
    return 0;
}