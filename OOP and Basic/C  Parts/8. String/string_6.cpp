// copy string using strcpy() function and strncpy() function
#include<stdio.h>
#include<string.h>

int main()
{
    char string_1[] = "C Programming";
    char string_2[20];
    strcpy(string_2, string_1); // we use this function as we cannot assign one character type array into another character type array
    // string_2 = string_1; is not possible
    printf("string_2 : %s \n\n", string_2);

    char string_3[] = "C ";
    char string_4[20] = "Programming";
    printf("string_3 : %s \n", string_3);
    strcpy(string_3, string_4);
    printf("string_3 : %s \n", string_3);
    printf("string_4 : %s \n\n", string_4);

    char string_7[20];
    strcpy(string_7, "C Programming"); // directly assign a string
    printf("string_7 : %s \n\n", string_7);

    char string_5[20] = "C ";
    char string_6[20] = "Programming";
    printf("string_5 : %s \n", string_5);
    strncpy(string_5, string_6, 7);  // first 7 characters of string_6 will be copied in string_5
    printf("string_5 : %s \n", string_5);
    printf("string_6 : %s \n\n", string_6);
}
