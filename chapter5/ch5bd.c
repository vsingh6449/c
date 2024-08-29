#include<stdio.h>
int main()
{
    int num, pos=0,neg=0,zero=0;
    char ch ='y';
    while(ch=='y')
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        if(num>0)
        {
            pos++;
        }
        if(num<0)
        {
            neg++;
        }
        if(num==0)
        {
            zero++;
        }
        getchar();
        printf("Do you want to continue(Y/N) : ");
        scanf("%c",&ch);
    }
    printf("Total zeroes : %d\n",zero);
    printf("Total positive numbers : %d\n",pos);
    printf("Total negative numbers : %d\n",neg);
    return 0;
}