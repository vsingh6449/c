#include<stdio.h>
int main()
{
    int i=1;
    int h,pay;
    while(i<=10)
    {
        printf("Enter the total hours of Employee %d : ",i);
        scanf("%d",&h);
        i++;
        if(h>40)
        {
            h=h-40;
            pay= h*120;
            printf("Total overtime pay = %d.\n",pay);
        }
        else
        {
            printf("No Overtime payable,\n");
        }
    }
    return 0;
}