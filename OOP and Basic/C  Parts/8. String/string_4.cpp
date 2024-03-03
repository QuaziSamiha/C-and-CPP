// finding length of string using strlen() function
#include<stdio.h>
#include<string.h>

int main()
{
    char string_name[] = "C Programming";

    int variable = strlen(string_name); // strlen() function returns an integer value

    printf("string length : %d \n", variable);
}
