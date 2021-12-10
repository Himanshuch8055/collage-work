#include <stdio.h>

int main() {
   int even;
   int odd;

   printf("Enter the NUM: ");
   scanf("%d", &even);

   printf("Enter the NUM: ");
   scanf("%d", &odd);
   
   if (even % 2 == 0)
      printf("%d is even\n", even);

   if (odd % 2 != 0 )
      printf("%d is odd\n", odd);

   return 0;
}