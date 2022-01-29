#include <stdio.h>
int main()
{
    printf("**************Reading a file**************\n");
    FILE *ptr = NULL;
    char string[30];
    ptr = fopen("Myfile.txt", "r");
    fscanf(ptr, "%s", string);
    printf("The content of Myfile.txt has : %s\n", string);

    printf("**************Writing a file**************\n\n");
    FILE *ptr2 = NULL;
    char str[50] = "This content was change by (This_is_Myfile2.txt)";
    ptr2 = fopen("Myfile2.txt", "w");
    fprintf(ptr2, "%s", str);

    printf("**************Append Mode**************\n");
    printf("See your Myfile3.txt (Content will be increase)\n");
    FILE *ptr3 = NULL;
    char str3[100] = "This content was rewriting by (This_is_Myfile3.txt)";
    ptr3 = fopen("Myfile3.txt", "a");
    fprintf(ptr3, "%s", str3);
    return 0;
}