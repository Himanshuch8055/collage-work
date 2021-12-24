#include <stdio.h>
int main()
{
    char opretion;
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
        printf("sum is: %d\n", num1 + num2);
        break;

    case '-':
        printf("sub is: %d\n", num1 - num2);
        break;

    case '*':
        printf("mul is: %d\n", num1 * num2);
        break;

    case '/':
        printf("div is: %d\n", num1 / num2);
        break;

    case '%':
        printf("mod is: %d\n", num1 % num2);
        break;
        }
    return 0;
}