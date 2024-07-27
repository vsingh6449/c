#include<stdio.h>
#include<math.h>
int main()
{
    float l1,l2,g1,g2,d;
    printf("enter the value of l1 and l2= ");
    scanf("%f%f",&l1,&l2);
    printf("Enter the value of g1 and g2= ");
    scanf("%f%f",&g1,&g2);
    l1=l1*3.14159/180;
    l2=l2*3.14159/180;
    g1=g1*3.14159/180;
    g2=g2*3.14159/180;
    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("Distance in nautical miles= %.2f",d);
    return 0;
}