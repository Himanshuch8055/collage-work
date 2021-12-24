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

    if (opretion == '+')
    {
        printf("sum is: %d\n", num1 + num2);
    }
    else if (opretion == '-')
    {
        printf("sub is: %d\n", num1 - num2);
    }
    else if (opretion == '*')
    {
        printf("mul is: %d\n", num1 * num2);
    }
    else if (opretion == '/')
    {
        printf("div is: %d\n", num1 / num2);
    }
    else if (opretion == '%')
    {
        printf("mod is: %d\n", num1 % num2);
    }
    else
        printf("No case match:");

    return 0;
}