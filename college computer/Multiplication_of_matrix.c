#include <stdio.h>

int main()
{
    int ram[10][10];
    int lakhan[10][10];
    int matrix[10][10];

    printf("Enter the first matrix:-\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("%d%d", i,j);
            scanf("%d", &ram[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter the second matrix:-\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("%d%d", i,j);
            scanf("%d", &lakhan[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication of the matrix is:-\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrix[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                matrix[i][j] += ram[i][j] * lakhan[i][j];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}