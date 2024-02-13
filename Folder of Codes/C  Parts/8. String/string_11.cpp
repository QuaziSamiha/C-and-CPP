// reverse of string using strrev() function
#include<stdio.h>
#include<string.h>

int main()
{
    char string_name[] = "C programing";

    printf("Before using strrev() function : \n");
    printf("string : %s \n", string_name);

    strrev(string_name);

    printf("After using strrev() function : \n");
    printf("string : %s \n", string_name);
}
