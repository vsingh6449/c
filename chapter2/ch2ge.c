#include<stdio.h>
#include<math.h>
int main()
{
    float a,r;
    printf("Enter the angle= ");
    scanf("%f",&a);
    r=a*3.14/180;
    printf("cos=%.2f\n",cos(r));
    printf("sin=%.2f\n",sin(r));
    printf("tan=%.2f\n",tan(r));
    printf("cosec=%.2f\n",1/sin(r));
    printf("cot=%.2f\n",1/tan(r));
    printf("sec=%.2f\n",1/cos(r));
    return 0;
}