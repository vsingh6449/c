#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("Enter the age of ram= ");
    scanf("%d",&ram);
    printf("Enter the age of shyam= ");
    scanf("%d",&shyam);
    printf("Enter the age of ajay= ");
    scanf("%d",&ajay);
    if(ram>shyam)
    {
        if(ram>ajay)
        printf("ram is elder");
        else
        printf("ajay is elder");
    }
    else
    {
        if(shyam>ajay)
        printf("shyam is elder");
        else
        printf("ajay is elder");
    }
    return 0;
}