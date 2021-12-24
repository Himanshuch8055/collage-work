#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the value: ");
    scanf("%d", &a);
    printf("Enter the value: ");
    scanf("%d", &b);
    printf("Enter the value: ");
    scanf("%d", &c);

    if (a > b && a > c)
        printf("%d is Greater Number. \n", a);
    else if (b > a && b > c)
        printf("%d is Greater Number. \n", b);
    else if (c > a && c > b)
        printf("%d is Greater Number. \n", c);
    else
        printf("Value are equal.");

    // Method 2
    printf("This is Method 2 see the code Again.\n");
    if (a > b)
    {
        if (a > c)
            printf("%d is Greater Number. \n", a);

        else
            printf("%d is Greater Number. \n", c);
    }

    if (b > a)
    {
        if (b > c)
            printf("%d is Greater Number. \n", b);

        else
            printf("%d is Greater Number. \n", c);
    }

    return 0;
}