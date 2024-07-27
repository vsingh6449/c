#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the co-ordinates= ");
    scanf("%d%d",&x,&y);
    if(x==0)
    {
        if(y==0)
        printf("points on origin");
        else
        printf("points on y axis");
    }
    else
    {
        if(y==0)
        printf("points on x axis");
        else
        printf("not on x,not on y and not on origin");
    }
    return 0;
}