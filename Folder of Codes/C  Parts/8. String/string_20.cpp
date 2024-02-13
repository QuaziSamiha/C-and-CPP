// strset() function : it replaces string by one character
// strnset() function : it replaces specific number of character of the string by one character
#include<stdio.h>
#include<string.h>

int main()
{
    printf("strset() function : \n");
    char string_name_1[] = "Programming";
    printf("Before : %s \n\n", string_name_1);
    strset(string_name_1, '*');
    printf("After  : %s \n\n", string_name_1);

    printf("strnset() function : \n");
    char string_name_2[] = "Programming";
    printf("Before : %s \n\n", string_name_2);
    strnset(string_name_2, '*', 4);
    printf("After  : %s \n", string_name_2);
}
