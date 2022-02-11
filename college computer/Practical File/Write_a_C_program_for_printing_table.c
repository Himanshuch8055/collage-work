#include <stdio.h>

int main()
{
    printf("The table of 2, 4, 6, 8 is :-\n");
    int a = 2, b = 4, c = 6, d = 8, e = 10;
    for (int i = 1; i <= e; i++)
    {
        printf("%d\t %d\t %d\t %d\t\n", a * i, b * i, c * i, d * i);
    }

    return 0;
}