#include <stdio.h>
int main()
{
    int h, t, grade;
    float c;
    printf("Enter the hardness(greater than 50) : ");
    scanf("%d", &h);
    printf("Enter the Carbon content(Less than 0.7) : ");
    scanf("%f", &c);
    printf("Enter the Tensile Strength(greater than 5600) : ");
    scanf("%d", &t);
    if (h > 50 && c < 0.7 && t > 5600)
    {
        printf("Grade is 10");
    }
    else if (h > 50 && c < 0.7 && t < 5600)
    {
        printf("Garde is 9");
    }
    else if (h < 50 && c < 0.7 && t > 5600)
    {
        printf("Garde is 8");
    }
    else if (h > 50 && c > 0.7 && t > 5600)
    {
        printf("Grade is 7");
    }
    else if (h > 50 || c < 0.7 || t > 5600)
    {
        printf("Grade 6");
    }
    else
    {
        printf("Grade 5");
    }
    return 0;
}