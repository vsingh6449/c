#include<stdio.h>
int main()
{
    int year,days,leapdays;
    printf("Enter any year = ");
    scanf("%d",&year);
    year=year-1;
    leapdays=(year/400)+(year/4)-(year/100);
    days=year*365+leapdays;
    if(days%7==0)
    {
        printf("On 01/01/%d is Monday",year+1);
    }
    
    if(days%7==1)
    {
        printf("On 01/01/%d is Tuesday",year+1);
    }
    
    if(days%7==2)
    {
        printf("On 01/01/%d is Wednesday",year+1);
    }
    
    if(days%7==3)
    {
        printf("On 01/01/%d is Thursday",year+1);
    }
    
    if(days%7==4)
    {
        printf("On 01/01/%d is Friday",year+1);
    }
    
    if(days%7==5)
    {
        printf("On 01/01/%d is Saturday",year+1);
    }
    
    if(days%7==6)
    {
        printf("On 01/01/%d is Sunday",year+1);
    }
    
    return 0;
}