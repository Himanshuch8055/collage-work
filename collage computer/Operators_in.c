#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);

    printf("Addition of %d + %d is:- %d \n", a, b, a + b);
    printf("subtract of %d - %d is:- %d \n", a, b, a - b);
    printf("Multiply of %d * %d is:- %d \n", a, b, a * b);
    printf("Division of %d / %d is:- %d \n", a, b, a / b);

    return 0;
}