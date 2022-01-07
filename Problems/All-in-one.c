#include <stdio.h>

int main()
{
    int number, prime, fact;
    printf("1. Prime Number\n");
    printf("2. Even Number\n");
    printf("3. odd Number\n");
    printf("4. Factorial of the Number\n");
    printf("5. Fabonica series\n");
    printf("6. Sum of Natural Number\n\n");
    printf("Enter the number: ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
    printf("Enter the Number");
    scanf("%d",&prime);
    printf("Prime Numbers are: \n");
    for(int i=1; i<=prime; i++)
    {
        fact=0;
        for(int j=1; j<=prime; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d " ,i);
    }
        break;
    default:
        break;
    }

    return 0;
}