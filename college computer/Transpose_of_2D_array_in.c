#include <stdio.h>
int main()
{

  int arr[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: \n");
  scanf("%d %d", &r, &c);

  printf("\nEnter the matrix:\n");
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
    {
      printf("Enter element arr%d%d: ", i + 1, j + 1);
      scanf("%d", &arr[i][j]);
    }

  printf("\nYour matrix is: \n");
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
    {
      printf("%d  ", arr[i][j]);
      if (j == c - 1)
        printf("\n");
    }

  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
    {
      transpose[j][i] = arr[i][j];
    }

  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
    for (int j = 0; j < r; ++j)
    {
      printf("%d  ", transpose[i][j]);
      if (j == r - 1)
        printf("\n");
    }
  return 0;
}