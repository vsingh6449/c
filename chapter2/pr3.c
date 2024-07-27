// Area of a triangle and gives their sides
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c,sp,area;
    printf("Enter the sides of the triangles: \n");
    scanf("%f%f%f",&a,&b,&c);
    sp=(a+b+c)/2;
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("Area of a triangle : %.2f\n",area);
    return 0;
}