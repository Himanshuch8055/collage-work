#include <stdio.h>

int main()
{
    int arr[10][10];
    int arr2[10][10];
    int sum[10][10];

    printf("Enter the first matrix:-\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("%d%d", i,j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter the second matrix:-\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("%d%d", i,j);
            scanf("%d", &arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Sum of the matrix is:-\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}