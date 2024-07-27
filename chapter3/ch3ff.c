#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,x3,y3,ab,bc,ca;
    double tolerance = 0.0001;
    printf("Enter the value of (X1,Y1) = ");
    scanf("%lf%lf",&x1,&y1);
    printf("Enter the value of (X2,Y2) = ");
    scanf("%lf%lf",&x2,&y2);
    printf("Enter the value of (X3,Y3) = ");
    scanf("%lf%lf",&x3,&y3);
    ab=sqrt((x2*x2-2*x2*x1+x1*x1)+(y2*y2-2*y2*y1+y1*y1));
    bc=sqrt((x3*x3-2*x3*x2+x2*x2)+(y3*y3-2*y3*y2+y2*y2));
    ca=sqrt((x3*x3-2*x3*x1+x1*x1)+(y3*y3-2*y3*y1+y1*y1));
    ab = floorf(ab*100)/100;
    bc = floorf(bc*100)/100;
    ca = floorf(ca*100)/100;
    if(fabs((ab + bc) - ca) < tolerance)
    {
         printf("All the three points falls on the straight line");
    }
    else
    {
        printf("All the three points not falls on the straight line");
    }
    return 0;
}