// /* C Program to find Sum of rows in a Matrix  */

// #include <stdio.h>

// int rowscolumns(int i, int j, int a[10][10])
// {
//     printf("Please Enter the Matrix Row and Column Elements \n");
//     for (int rows = 0; rows < i; rows++)
//     {
//         for (int columns = 0; columns < j; columns++)
//         {
//             scanf("%d", &a[rows][columns]);
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int i, j, rows, columns, a[10][10], Sum;

//     printf("Please Enter Number of rows and columns  :  ");
//     scanf("%d %d", &i, &j);

//     rowscolumns(i, j, a[i][j]);

//     for (rows = 0; rows < i; rows++)
//     {
//         Sum = 0;
//         for (columns = 0; columns < j; columns++)
//         {
//             Sum = Sum + a[rows][columns];
//         }
//         printf("The Sum of Elements of a Rows in a Matrix =  %d \n", Sum);
//     }

//     return 0;
// }

#include <stdio.h>
int enterrowcolumns(int rows, int columns, int arr[10][10])
{
    printf("Enter the elements of rows and columns:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    return 0;
}
int sum(int rows, int columns, int sum, int a[10][10])
{
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < columns; j++)
        {
            sum = sum + a[i][j];
        }
        printf("The Sum of Elements of a Rows in a Matrix =  %d \n", sum);
    }
    return 0;
}
int main()
{
    int array[10][10], i, j, sum1;
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &i, &j);
    enterrowcolumns(i, j, array[10][10]);
    sum(i, j, sum1, array[i][j]);
    return 0;
}