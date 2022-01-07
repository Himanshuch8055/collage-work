// #include <stdio.h>
// int series(int n, int n3, int n1, int n2);
// int main()
// {
//     int n1 = 0, n2 = 1, n3 = 0, n;
//     printf("Enter positive Number: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series: %d, %d", n1, n2);
//     series(n - 2);

//     return 0;
// }
// int series(int n, int n3, int n1, int n2)
// {
//     if (n > 0)
//     {
//         n3 = n1 + n2;
//         n1 = n2;
//         n2 = n3;
//         printf("%d", n3);
//         series(n - 1);
//     }
// }

#include <stdio.h>
void series(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);
        series(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    printf("%d %d ", 0, 1);
    series(n - 2);
    return 0;
}