#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,thetha;
    printf("Enter the value of x and y= ");
    scanf("%f%f",&x,&y);
    r=sqrt(r*r+y*y);
    thetha=atan2(y,x);
    printf("polor co-ordinates= %.2f,%.2f",r,thetha);
    return 0;
}