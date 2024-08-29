#include <stdio.h>
int main()
{
    float w, h, feet, BMI;
    printf("Enter the Weight of the person (in kilom) : ");
    scanf("%f", &w);
    printf("Enter the Height of the person (in feet) : ");
    scanf("%f", &feet);
    h = feet * 0.3048;
    printf("Height in m = %f\n", h);
    BMI = w / (h * h);
    printf("BMI = %f\n", BMI);
    if (BMI < 15)
    {
        printf("Starvation");
    }
    else if (BMI >= 15.1 && BMI <= 17.5)
    {
        printf("Anorexic");
    }
    else if (BMI >= 17.6 && BMI <= 18.5)
    {
        printf("Underweight");
    }
    else if (BMI >= 18.6 && BMI <= 24.9)
    {
        printf("Ideal");
    }
    else if (BMI >= 25 && BMI <= 25.9)
    {
        printf("Overweight");
    }
    else if (BMI >= 30 && BMI <= 30.9)
    {
        printf("Obese");
    }
    else if (BMI >= 40)
    {
        printf("Morbidly Obese");
    }

    return 0;
}