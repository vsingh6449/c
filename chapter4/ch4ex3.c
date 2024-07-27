#include<stdio.h>
int main()
{
    int yos;
    char gen,qual;
    printf("Enter the gender = ");
    scanf("%c",&gen);
    getchar();
    printf("Enter the qualification = ");
    scanf("%c",&qual);
    printf("Enter the years of service = ");
    scanf("%d",&yos);
    if(gen=='m'&&yos>=10&&qual=='p')
    {
        printf("Salary of employee = 15000");
    }
    
    else if(gen=='m'&&yos>=10&&qual=='g')
    {
        printf("Salary of employee = 10000");
    }
    
    else if(gen=='m'&&yos<10&&qual=='p')
    {
        printf("Salary of employee = 10000");
    }
    
    else if(gen=='m'&&yos<10&&qual=='g')
    {
        printf("Salary of employee = 7000");
    }
    
    else if(gen=='f'&&yos>=10&&qual=='p')
    {
        printf("Salary of employee = 12000");
    }
    
    else if(gen=='f'&&yos>=10&&qual=='g')
    {
        printf("Salary of employee = 9000");
    }
    
    else if(gen=='f'&&yos<10&&qual=='p')
    {
        printf("Salary of employee = 10000");
    }
    
    else if(gen=='f'&&yos<10&&qual=='g')
    {
        printf("Salary of employee = 6000");
    }
    return 0;
}