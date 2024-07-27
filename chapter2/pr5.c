#include<stdio.h>
int main()
{
    int amount,nohun,nofifty,noten,nofive,notwo,noone,total;
    printf(" Enter any amount = ");
    scanf("%d",&amount);
    nohun=amount/100;
    amount=amount%100;
    nofifty=amount/50;
    amount=amount%50;
    noten=amount/10;
    amount=amount%10;
    nofive=amount/5;
    amount=amount%5;
    notwo=amount/2;
    amount=amount%2;
    noone=amount/1;
    amount=amount%1;
    total= nohun+nofifty+noten+nofive+notwo+noone;
    printf("Total notes of 100 is = %d\n",nohun);
    printf("Total notes of 50 is = %d\n",nofifty);
    printf("Total notes of 10 is = %d\n",noten);
    printf("Total notes of 5 is = %d\n",nofive);
    printf("Total notes of 2 is = %d\n",notwo);
    printf("Total notes of 1 is = %d\n",noone);
    printf("Smallest number of notes = %d",total);
    return 0;
}