// string compare using strcmp() : this function is case sensitive
#include<stdio.h>
#include<string.h>

int main()
{
    char string_1[20] = "C programing";
    char string_2[20] = "C programing";

    int v1 = strcmp(string_1, string_2); // if two strings are equal then strcmp() function will return 0
    printf("v1 : %d \n\n", v1);

    char string_3[50] = "I am Learning C programing";
    char string_4[50] = "C programing";

    int v2 = strcmp(string_3, string_4); // if two string_3 are is greater than string_4,then strcmp() function will return positive value
    printf("v2 : %d \n\n", v2);

    char string_5[20] = "C";
    char string_6[20] = "C programing";

    int v3 = strcmp(string_5, string_6); // if two string_5 are is less than string_6,then strcmp() function will return negative value
    printf("v3 : %d \n\n", v3);
}
