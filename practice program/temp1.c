#include<stdio.h>
int main()
{
    int num,pos=0,neg=0,zero=0;
    char ch;
    do
    {
        printf("Enter a num : ");
        scanf("%d",&num);
        if(num>0)
        pos++;
        if(num<0)
        neg++;
        if(num==0)
        zero++;
        getchar();
        printf("Do you want to enter more number : ");
        scanf("%c",&ch);
        } while (ch=='y');
        printf("Total positive :%d\n",pos);
        printf("Total negative :%d\n",neg);
        printf("Total Zeroes :%d\n",zero);
        return 0;
}
