#include <stdio.h>

int main()
{
    int a, b;

    for (a = 0; a < 10; a++)
    {
        // for (b = 0; b < 5; b++)
        // {
        //     printf(" ");
        // }

        for (b = 0; b < 2 * a - 1; b++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}