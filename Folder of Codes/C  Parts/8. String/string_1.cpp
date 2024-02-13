// introduction to string
// string is a character type array
#include<stdio.h>

int main()
{
    char string_1[7]; // declaring string
    // initializing string
    string_1[0] = 's';
    string_1[1] = 'a';
    string_1[2] = 'm';
    string_1[3] = 'i';
    string_1[4] = 'h';
    string_1[5] = 'a';
    string_1[6] = '\0'; // null character
    printf("string : %s \n", string_1);
//----------------------------------------------------------------------------------------------------------------------------------
    char string_2[5] = {'A','k','k','u','\0'}; // declaring & initializing string
    printf("string : %s \n", string_2);
//----------------------------------------------------------------------------------------------------------------------------------
    char string_3[] = "Quazi Samiha"; // declaring & initializing string
    printf("string : %s \n", string_3);
//----------------------------------------------------------------------------------------------------------------------------------
    char string_4[] = "Samiha \
                       Tasnim"; // using line breaking character we can use more than one line for string
    printf("string : %s \n", string_4); // '\' line breaking character
}
