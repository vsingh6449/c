#include <stdio.h>
int main()
{
    int i,j,k;
    int row = 5;
    int num = 1;
    for (i = 1; i <= row*2; i++)
    {
        
        if (num % 2 != 0)
        {
            for(k=1;k<=row*2-i;k++)
            {
                printf(" ");
            }
            for (j = 1; j <= num; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        num++;
    }
    num=10-2;
     for (i = 1; i <= row*2; i++)
    {
        
        if (num % 2 != 0)
        {
            for(k=1;k<=i+1;k++)
            {
                printf(" ");
            }
            for (j = 1; j <= num; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        num--;
    }

    return 0;
}