#include <stdio.h>

int main (){
    int a, b;
    for (int a = 0; a < 5; a++)
    {
        for (int b = 5; b > a; b--)
        {
            printf("#");
        }
        printf("\n");
        
    }
    
    return 0;
}