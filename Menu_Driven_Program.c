#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, num, i, fact, count;

    while (1)
    {
        printf("\n1.Factorial of number:\n");
        printf("2.Prime Number:\n");
        printf("3.Odd or Even:\n");
        printf("4.Fibonacci Series\n");
        printf("5.Exit\n");

        printf("Your Choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("Enter a number:\n");
            scanf("%d", &num);
            fact = 1;

            for (i = 1; i <= num; i++)
            {
                fact = fact * i;
            }
            printf("Factorial of %d is %d", num, fact);
            break;
        }
        case 2:
        {
            printf("Enter a number:\n");
            scanf("%d", &num);
            count = 0;

            for (i = 1; i <= num; i++)
            {
                if (num % i == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                printf("%d is a Prime Number\n", num);
            }
            else
            {
                printf("Not a Prime Number\n");
            }

            break;
        }
        case 3:
        {
            printf("Enter a number:\n");
            scanf("%d", &num);

            if (num % 2 == 0)
            {
                printf("%d is Even Number\n", num);
            }
            else
            {
                printf("%d is Odd Number\n", num);
            }
            break;
        }
        case 4:
        {
            int n, i, first = 0, second = 1, next_term;
            printf("Enter number of terms:\n");
            scanf("%d", &n);

            printf("Fibonacci Series:\n");

            for (int i = 1; i <= n; i++)
            {
                printf("%d ,", first);

                next_term = first + second;
                first = second;
                second = next_term;
            }
        }
        case 5:
        {
            exit(0); // Terminates the program execution
        }
        default:
        {
            printf("You Entered a wrong choice\n");
        }
        }
    }
}
