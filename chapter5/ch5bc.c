#include<stdio.h>
int main()
{
    int n=21;
    int up,cp;
    while(n>1)
    {
        printf("Pick mathsticks from 1 to 4 only : ");
        scanf("%d",&up);
        if(up>=1 && up<=4)
        {
            n=n-up;
            printf("Left matchsticks : %d\n",n);
            printf("Now computer pick the matchsticks\n");
            cp=5-up;
            n=n-cp;
            printf("computer picked:%d\n",cp);
            printf("Left matchstick:%d\n",n);
        }
        else
        {
            printf("Please pick 1 to 4 only\n");
        }
    }
    printf("Only 1 matchstick left you lose the game. Computer Wins!!!\n");
    return 0;
}