#include<stdio.h>
int main()
{
    int n;
    int big=-99999999,small=9999999,range;
    char ch='y';
    while(ch=='y')
    {
        printf("Enter the number : ");
        scanf("%d",&n);
        if(n>big)
        {
            big=n;
        }
        if(n<small)
        {
            small=n;
        }
        printf("Do you want to continue[y/n] : ");
        scanf("%c",&ch);
    }
    if(small<0 && big>0)
    {
        small= -1*small;
        range= -1*big;
    }
    else if(small<0 && big<0)
    {
        small=-1*small;
        big=-1*big;
        range=small-big;
    }
    else if(small>0 && big>0)
    {
        range=big-small;
    } 
    printf("Range=%d",range);
    return 0;
}