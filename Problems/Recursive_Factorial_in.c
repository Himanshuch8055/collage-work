#include <stdio.h>

long int factorial(int a);

int main()
{
    int a;
    printf("Enter Number Do you get Factorial:- ");
    scanf("%d", &a);
    printf("Factorial %d = %ld", a, factorial(a));

    return 0;
}
long int factorial(int a)
{
    if (a >= 1)
    {
        return a * factorial(a - 1);
    }
    else
    {
        return 1;
    }
}