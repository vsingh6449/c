#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c;
    char condition;
    char ch = 'y';
    while (ch == 'y')
    {
        printf("\n\nEnter the operation you want to perform : \n");
        printf("A.Addition\n");
        printf("B.Subtraction\n");
        printf("C.Multiplication\n");
        printf("D.division\n");
        printf("E.Modulation\n");
        printf("F.Power of a Number\n");
        printf("G.Factorial of a Number\n");
        printf("H.Check Even Odd\n");
        printf("I.Check prime\n");
        printf("J.Exit\n");
        printf("Enter your choice : ");
        scanf(" %c", &condition);
        switch (condition)
        {
        case 'A':
        case 'a':
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a + b;
            system("CLS");
            printf("Addition of %d and %d : %d\n", a, b, c);
            break;

        case 'b':
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a - b;
            system("CLS");
            printf("Subtraction of %d and %d : %d\n", a, b, c);
            break;

        case 'c':
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a * b;
            system("CLS");
            printf("Multiplication of %d and %d : %d\n", a, b, c);
            break;

        case 'd':
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a / b;
            system("CLS");
            printf("Division of %d and %d : %d\n", a, b, c);
            break;

        case 'e':
            printf("Enter the value of a : ");
            scanf("%d", &a);
            printf("Enter the value of b : ");
            scanf("%d", &b);
            c = a % b;
            system("CLS");
            printf("Modulation of %d and %d : %d\n", a, b, c);
            break;

        case 'f':
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

        case 'g':
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
        case 'h':
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
        case 'i':
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
        case 'j':
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