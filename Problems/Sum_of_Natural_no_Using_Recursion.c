// #include <stdio.h>
// int addNumbers(int n);
// int main()
// {
//     int num;
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);
//     printf("Sum = %d", addNumbers(num));
//     return 0;
// }

// int addNumbers(int n)
// {
//     if (n != 0)
//         return n + addNumbers(n - 1);
//     else
//         return n;
// }

#include <stdio.h>
int main()
{
    int a = 0, b = 1, range, c, sum = 0;

    printf("Enter the range of Fibonacci series: ");
    scanf("%d", &range);

    printf("The fibonacci series is: ");
    while (a <= range)
    {
        printf("%d, ", a);
        sum += a;
        c = a + b;
        a = b;
        b = c;
    }

    printf("\nTheir sum is = %d", sum);

    return 0;
}