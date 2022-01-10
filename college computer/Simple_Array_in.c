#include <stdio.h>

int main()
{
    int array[10], i;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the array: ");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("your array is: %d\n", i);
    }

    return 0;
}