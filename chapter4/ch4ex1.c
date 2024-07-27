#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;
    printf("Enter marks in five digits= ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)*100/500;
    printf("per = %d\n",per);
    if(per>=60)
    printf("first division");
    if((per>=50)&&(per<60))
    printf("second division");
    if((per>=40)&&(per<50))
    printf("third division");
    if(per<40)
    printf("fail");
    return 0;
}