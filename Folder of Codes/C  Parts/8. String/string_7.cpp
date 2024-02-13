// concatenation of string using strcat() function and strncat() function
#include<stdio.h>
#include<string.h>

int main()
{
    char string_1[] = "I am learning ";
    char string_2[] = "C programing";
    printf("Before using strcat() function : \n");
    printf("string_1 : %s \n", string_1);
    printf("string_2 : %s \n", string_2);

    strcat(string_1, string_2); // string_2 is adding after string_1 in string_1

    printf("After using strcat() function : \n");
    printf("string_1 : %s \n", string_1);
    printf("string_2 : %s \n\n", string_2);
//-------------------------------------------------------------------------------------------------------------------------
    char string_3[] = "I am learning ";
    printf("Before using strcat() function : \n");
    printf("string_3 : %s \n", string_3);

    strcat(string_3, "C++ Programming");

    printf("After using strcat() function : \n");
    printf("string_3 : %s \n\n", string_3);
//--------------------------------------------------------------------------------------------------------------------------
    char string_4[] = "C ";
    char string_5[] = "programing";
    printf("Before using strncat() function : \n");
    printf("string_4 : %s \n", string_4);
    printf("string_5 : %s \n", string_5);

    strncat(string_4, string_5, 7); // 7 characters of string_5 is adding after string_4 in string_4

    printf("After using strncat() function : \n");
    printf("string_4 : %s \n", string_4);
    printf("string_5 : %s \n\n", string_5);
}
