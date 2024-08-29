#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of a Triangle = ");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b || b == c || c == a)
    {
        printf("The Triangle is isosceles angle\n");
    }
    else if (a == b && b == c && c == a)
    {
        printf("The Triangle is equilateral angle\n");
    }
    
    else if (a != b && b != c && c != a)
    {
        printf("The Triangle is Scalene angle\n");
    }
    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (c * c + b * b == a * a))
    {
        printf("The Triangle is Right angle\n");
    }
    else
    {
        printf("The Triangle is not a Right angle\n");
    }
    return 0;
}