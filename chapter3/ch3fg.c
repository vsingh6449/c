#include<stdio.h>
int main()
{
    float x,y,r,a,b,df;
    printf("Enter the value of (X,Y)= ");
    scanf("%f%f",&x,&y);
    printf("Enter the Radius= ");
    scanf("%f",&r);
    printf("Enter the value of (a,b)= ");
    scanf("%f%f",&a,&b);
    df= sqrt(pow((a-x),2)+pow((b-y),2));
    if(df>r)
    {
        printf("point outside the circle");
    }
    if(df<r)
    {
        printf("point inside the circle");
    }
    if(df==r)
    {
        printf("point is on the surface");
    }
    return 0;
}