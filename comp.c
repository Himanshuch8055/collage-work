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

    // scanf("%d\n%D\n%D\n", &a, &b, &c);

    // if (a>b && a>c || b>a & b>c || c>a & c>b)
    // {
    //     // printf("%d||%d||%d", a, b, c);
    //     printf("This is a NUM:%d", d);
    // }

    if (a > b && a > c)
    {
        printf("%d is great: \n", a);
    }

    else if (b > a && b > c)
    {
        printf("%d is great: \n", b);
    }

    else if (c > a && c > b)
    {
        printf("%d is great: \n", c);
    }

    if (a >= b)
    {
        if (a > c)
        {
            printf("%d is great: \n", a);
        }

        else
        {
            printf("%d is great: \n", c);
        }
    }

    if (b >= a)
    {
        if (b > c)
        {
            printf("%d is great: \n", b);
        }

        else
        {
            printf("%d is great: \n", c);
        }
    }

    

    return 0;
}