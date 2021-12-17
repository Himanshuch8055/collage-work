#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, temp;

    printf("THE unsorted array: ");
    for (int i = 0; i < 9; i++)
    {
        printf("%d", arr);
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("THE sorted array: ");
    for (int i = 0; i < 9; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}