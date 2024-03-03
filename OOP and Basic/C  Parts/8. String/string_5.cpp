// finding length of string without using strlen() function
#include<stdio.h>

int main()
{
    char string_name[] = "C Programming";

    int i, string_length = 0;

    i = 0;
    while(string_name[i] != '\0')
    {
        i++;
        string_length++;
    }

    printf("string length : %d \n", string_length);
}
