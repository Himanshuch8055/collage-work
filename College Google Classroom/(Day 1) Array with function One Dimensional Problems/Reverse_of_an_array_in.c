#include <stdio.h>

int main()
{
    int num, i, j, array1[10], array2[10];

    printf("Enter the size of an Array: ");
    scanf("%d", &num);

    printf("Enter array elements:\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array1[i]);
    }

    for (i = num - 1, j = 0; i >= 0; i--, j++)
    {
        array2[j] = array1[i];
    }

    for (i = 0; i < num; i++)
    {
        array1[i] = array2[i];
    }
    printf("The reversed array:\n");
    for (i = 0; i < num; i++)
    {
        printf("%d, ", array1[i]);
    }

    return 0;
}