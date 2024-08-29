#include <stdio.h>
#include<math.h>
int main()
{
    double angle;
    double torlence = 1.00001;
    printf("Enter a Angle : ");
    scanf("%lf", &angle);
    angle = angle * 3.14159265359 / 180;
    double sine = sin(angle);
    double cosine = cos(angle);
    printf("%lf\n", sine);
    printf("%lf\n", cosine);
    double sum = sine * sine + cosine * cosine;
    printf("%lf\n", sum);
    if (sum >=1 && sum<= torlence)
    {
        printf("Yes sum of square of sine and cosine is equal");
    }
    else
    {
        printf("No sum of square of sine and cosine is not equal");
    }
    return 0;
}