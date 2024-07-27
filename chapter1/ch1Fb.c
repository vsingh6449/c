// The area and perimeter of rectangle and area of  a circle:
#include<stdio.h>

int main()
{
    float length, breadth,radius,aor,aoc,por;
    printf ("Enter the length of rectangle      = ");
    scanf("%f",&length);
    printf ("Enter the breadth of rectangle     = ");
    scanf ("%f",&breadth);
    printf("==============================================\n");
    aor=length*breadth;
    por=2*(length+breadth);
    printf("area of rectangle                   =%.2f\n",aor);
    printf("perimeter of rectangle              =%.2f\n",por);
    printf("===============================================\n");
    printf("enter the radius of circle          = ");
    scanf("%f",&radius); 
    aoc=3.14*radius*radius;
    printf("the are of a circle                 = %.2f", aoc); 
    return 0;
}