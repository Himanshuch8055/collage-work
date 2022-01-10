#include <stdio.h>

int main()
{
    int choose, prime, fact;
    printf("1. Prime Number\n");
    printf("2. Even Number\n");
    printf("3. odd Number\n");
    printf("4. Factorial of the Number\n");
    printf("5. Fabonica series\n");
    printf("6. Sum of Natural Number\n");
    printf("******************************\n");
    printf("What opretion do you want: ");
    scanf("%d", &choose);
    printf("******************************\n");

    switch (choose)
    {
    case 1:
        printf("Enter the positive Number: ");
        scanf("%d", &prime);
        printf("Prime Numbers are: ");
        for (int i = 1; i <= prime; i++)
        {
            fact = 0;
            for (int j = 1; j <= prime; j++)
            {
                if (i % j == 0)
                    fact++;
            }
            if (fact == 2)
                printf("%d, ", i);
        }
        break;

    case 2:
        printf("Enter the positive number: ");
        scanf("%d", &prime);
        if (prime < 0)
            printf("\n\v Please enter positive number.\n");
        else
            printf("Even Number are: ");
        for (int i = 0; i < prime; i++)
        {
            if (i % 2 == 0)
                printf("%d, ", i);
        }
        break;

    case 3:
        printf("Enter the positive number: ");
        scanf("%d", &prime);
        if (prime < 0)
            printf("\n\v Please enter positive number.\n");
        else
            printf("Even Number are: ");
        for (int i = 0; i < prime; i++)
        {
            if (i % 2 != 0)
                printf("%d, ", i);
        }
        break;
        case 4:
        
        break;
    default:
        printf("NO OPRETION MATCH.");
        break;
    }

    return 0;
}