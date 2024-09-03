#include <stdio.h>
int romanise(int, int, char);
int main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d", &year);
    year = romanise(year, 1000, 'M');
    year = romanise(year, 500, 'D');
    year = romanise(year, 100, 'C');
    year = romanise(year, 10, 'X');
    year = romanise(year, 5, 'V');
    year = romanise(year, 1, 'I');
    return 0;
}
int romanise(int y, int k, char ch)
{
    int i, j;
    j = y / k;
    if(y == 9 )
    {
        printf("%c%c",'I','X');
        return 0;
    }
    else if(y==4)
    {
        printf("%c%c",'I','V');
    }
    else
    {
        for (i = 1; i <= j; i++)
        {
            printf("%c", ch);
        }
    }
    return (y % k);
}
