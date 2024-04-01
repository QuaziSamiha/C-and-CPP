// use of stricmp() function (not case sensitive)
// use of strncmp() function (case sensitive)
#include<stdio.h>
#include<string.h>

int main()
{
    char string_1[20] = "PROGRAMMING";
    char string_2[20] = "Programming";
    int v1 = stricmp(string_1, string_2); // if two strings are equal then stricmp() function will return 0
    printf("v1 : %d \n\n", v1);

    char string_3[20] = "Programming";
    char string_4[20] = "Program";
    int v2 = strncmp(string_3, string_4, 7); // if two strings are equal then stricmp() function will return 0
    printf("v2 : %d \n\n", v2);

    char string_5[20] = "PROGRAMming";
    char string_6[20] = "Program";
    int v3 = strncmp(string_5, string_6, 7);
    printf("v3 : %d \n\n", v3);
}
