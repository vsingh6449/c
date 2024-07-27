#include<stdio.h>
int main()
{
    int prin,noy;
    float roi,si;
    printf("Enter the principal of amount   : ");
    scanf("%d",&prin);
    printf("Enter the number of years       : ");
    scanf("%d",&noy);
    printf("Enter the rate of interest      : ");
    scanf("%f",&roi);
    si=prin*noy*roi/100;
    printf("======================================\n");
    printf("Simple of interest              = %.2f",si);
    getchar();
    getchar();
    return 0;
}