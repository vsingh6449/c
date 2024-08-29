#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c,condition;
    char ch = 'y';
    while (ch == 'y')
    {
        printf("\n\nEnter the operation you want to perform : \n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.division\n");
        printf("5.Modulation\n");
        printf("6.Power of a Number\n");
        printf("7.Factorial of a Number\n");
        printf("8.Check Even Odd\n");
        printf("9.Check prime\n");
        printf("10.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &condition);
        switch (condition)
        {
        case 1:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a + b;
            system("CLS");
            printf("Addition of %d and %d : %d\n", a, b, c);
            break;

        case 2:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a - b;
            system("CLS");
            printf("Subtraction of %d and %d : %d\n", a, b, c);
            break;

        case 3:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a * b;
            system("CLS");
            printf("Multiplication of %d and %d : %d\n", a, b, c);
            break;

        case 4:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a / b;
            system("CLS");
            printf("Division of %d and %d : %d\n", a, b, c);
            break;

        case 5:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a % b;
            system("CLS");
            printf("Modulation of %d and %d : %d\n", a, b, c);
            break;

        case 6:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            // int c=1;
            // for(int i=1;i<=b,i++)
            // c=c*a;
            c = pow(a, b);
            system("CLS");
            printf("Power of %d and %d : %d\n", a, b, c);
            break;

        case 7:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            c = 1;
            for (int i = 1; i <= a; i++)
            {
                c = c * i;
            }
            system("CLS");
            printf("Factorial of %d : %d\n", a,c);
            break;
        case 8:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            system("CLS");
            if (a % 2 == 0)
            {
                printf("%d is a even number", a);
            }
            else
            {
                printf("%d is a odd number", a);
            }
            break;
        case 9:
            printf("Enter the value of a : ");
            scanf("%d", &a);
            int count = 0;
            system("CLS");
            for (int i = 2; i < a; i++)
            {
                if (a % i == 0)
                {
                    count++;
                    printf("%d is not a prime number", a);
                    break;
                }
            }
            if (count == 0)
            {
                printf("%d is a prime number", a);
            }
            break;
        case 10:
            system("CLS");
            printf("Exiting the program...\n");
            ch = 'n';
            break;
        default:
            system("CLS");
            printf("Invalid choice, Please enter a number between 1 to 10.\n");
            break;
        }
    }

    return 0;
}