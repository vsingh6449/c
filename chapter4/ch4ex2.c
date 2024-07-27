#include<stdio.h>
int main()
{
    char gen,ms;
    int age;
    printf("Enter ms= ");
    scanf("%c",&ms);
    getchar();
    printf("Enter gen= ");
    scanf("%c",&gen);
    printf("Enter age= ");
    scanf("%d",&age);
    if((ms=='M')  || (ms=='U'&&gen=='M'&&age>30)||(ms=='U'&&gen=='F'&&age>25))
    {
        printf("Driver is ensured");
    }
    else
    {
        printf("driver is not ensured");
    }



    return 0;
}