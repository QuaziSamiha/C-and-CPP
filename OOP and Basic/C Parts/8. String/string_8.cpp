// concatenation of string using strcat() function
#include<stdio.h>
#include<string.h>

int main()
{
    char string_1[] = "I am learning ";

    strcat(string_1, "C programing"); // adding after string_1 in string_1

    printf("string_1 : %s \n", string_1);
}

