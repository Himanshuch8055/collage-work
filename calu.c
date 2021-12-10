#include <stdio.h>
int main()
{
    char opretion;
    float sum, sub, mul, div, mod;
    int num1;
    int num2;
    printf("Enter the opretion: ");
    scanf("%c", &opretion);

    printf("Enter the number:");
    scanf("%d", &num1);

    printf("Enter the number:");
    scanf("%d", &num2);

    switch (opretion)
    {
    case '+':
        sum = num1 + num2;
        printf("sum is: %f\n", sum);
        break;

    case '-':
        sub = num1 - num2;
        printf("sub is: %f\n", sub);
        break;

    case '*':
        mul = num1 * num2;
        printf("mul is: %f\n", mul);
        break;

    case '/':
        div = num1 / num2;
        printf("div is: %f\n", div);
        break;

    case '%':
        mod = num1 % num2;
        printf("mod is: %f\n", mod);
        break;
    }
    return 0;
}