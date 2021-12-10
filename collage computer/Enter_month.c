#include <stdio.h>

int main()
{
    int value;
    printf("Enter the month: ");
    scanf("%d", &value);

    switch (value)
    {
    case 1:
        printf("January: %d\n", value);
        break;

    case 2:
        printf("February: %d\n", value);
        break;

    case 3:
        printf("March: %d\n", value);
        break;

    case 4:
        printf("April: %d\n", value);
        break;

    case 5:
        printf("May: %d\n", value);
        break;

    case 6:
        printf("June: %d\n", value);
        break;

    case 7:
        printf("July: %d\n", value);
        break;

    case 8:
        printf("August: %d\n", value);
        break;

    case 9:
        printf("september: %d\n", value);
        break;

    case 10:
        printf("October: %d\n", value);
        break;

    case 11:
        printf("Nevember: %d\n", value);
        break;

    case 12:
        printf("December: %d\n", value);
        break;

    default:
        break;
    }
    return 0;
}