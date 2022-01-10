#include <stdio.h>

int main()
{
    int a, b, arm = 0, d;
    printf("Enter the number:- ");
    scanf("%d", &a);
    d = a;

    while (a > 0)
    {
        b = a % 10;
        arm = arm + (b * b * b);
        a = a / 10;
    }
    if (d == arm)
    {
        printf("Number is Armstrong.");
    }
    else
        printf("Number is NOT Armstrong.");

    return 0;
}