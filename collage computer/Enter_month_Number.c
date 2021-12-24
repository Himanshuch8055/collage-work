#include <stdio.h>

int main()
{
    int value;
    printf("Enter the Month Number:- ");
    scanf("%d", &value);

    switch (value)
    {
    case 1:
        printf("Number %d is January.", value);
        break;

    case 2:
        printf("Number %d is February.", value);
        break;

    case 3:
        printf("Number %d is March.", value);
        break;

    case 4:
        printf("Number %d is April.", value);
        break;

    case 5:
        printf("Number %d is May.", value);
        break;

    case 6:
        printf("Number %d is June.", value);
        break;

    case 7:
        printf("Number %d is July.", value);
        break;

    case 8:
        printf("Number %d is August.", value);
        break;

    case 9:
        printf("Number %d is september.", value);
        break;

    case 10:
        printf("Number %d is October.", value);
        break;

    case 11:
        printf("Number %d is Nevember.", value);
        break;

    case 12:
        printf("Number %d is December.", value);
        break;

    default:
        break;
    }
    return 0;
}