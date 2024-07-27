#include<stdio.h>
#include<math.h>
int main()
{
    float vel,temp,wcf;
    printf("Enter the value of temp = ");
    scanf("%f",&temp);
    printf("Enter the value of vel = ");
    scanf("%f",&vel);
    wcf=35.74+0.6215*temp+(0.4275*temp-35.75)*pow(vel,0.16);
    printf("wind chill factor = %.2f",wcf);
    return 0;
}