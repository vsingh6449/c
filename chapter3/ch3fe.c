#include<stdio.h>
int main()
{
    int len,bre,area,perimeter;
    printf("Enter the length of rectangle= ");
    scanf("%d", &len);
    printf("Enter the breath of rectangle= ");
    scanf("%d", &bre);
    area = len*bre;
    printf("area=%d\n",area);
    perimeter = 2*(len+bre);
    printf("perimeter=%d\n",perimeter);
    if(area>perimeter)
    {
        printf("Area is greater than perimeter");
    }
    else
    {
        printf("Area is smaller than perimeter");
    }
    return 0;
}