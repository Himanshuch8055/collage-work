#include <stdio.h>

int main()
{
   int number;

   printf("Enter the number: ");
   scanf("%d", &number);

   if (number % 2 == 0)
   {
      printf("%d is even number.", number);
   }
   else if (number % 2 != number)
   {
      printf("%d is odd number.", number);
   }

   return 0;
}