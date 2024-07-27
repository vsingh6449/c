#include<stdio.h>
int main()
{
    int rate,qua,amount;
    printf("Enter the rate of product= ");
    scanf("%d",&rate);
    printf("Enter the quantity of product= ");
    scanf("%d",&qua);
    amount=qua*rate;
    if(amount>1000);
    {
    amount=amount-amount*0.10;
    }
    printf("payabale amount= %d",amount);
    return 0;
}