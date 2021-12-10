#include <stdio.h>

int main()
{
    int a, b, row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (a = 1; a < row; a++)
    {
        for (b = a; b < row; b++)
        {
            printf(" ");
        }

        for (b = 1; b <= (2 * a - 1); b++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}