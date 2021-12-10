#include <stdio.h>

int main (){
    int a, b;
    for (int a = 0; a < 10; a++)
    {
        for (int b = 10; b > a; b--)
        {
            printf("#");
        }
        printf("\n");
        
    }
    
    return 0;
}