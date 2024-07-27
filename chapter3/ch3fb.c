#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf ("Enter the age of ram= ");
    scanf("%d",&ram);
    printf ("Enter the age of shyam= ");
    scanf("%d",&shyam);
    printf ("Enter the age of ajay= ");
    scanf("%d",&ajay);
    if(ram<shyam)
    { 
        if(ram<ajay)
        {
            printf("Ram is younger");
        }
        else
        {
            printf("Ajay is younger");
        }
    }
    else
    {
        if(shyam<ajay)
        {
            printf("Shyam is younger");
        }
        else
        {
            printf("Ajay is younger");
        }
    }


    return 0;
}