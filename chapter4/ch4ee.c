#include<stdio.h>
int main()
{
    float salary;
    printf("Enter the salary : ");
    scanf("%f",&salary);
    (salary>=25000)?(printf("Manager")):((salary>=15000 && salary<=25000)?printf("Accountant"): printf("clerk"));
    return 0;
}