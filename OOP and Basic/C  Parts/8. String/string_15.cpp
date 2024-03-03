// use of strlwr() function and strupr() function
#include<stdio.h>
#include<string.h>

int main()
{
    char string_1[20] = "PROGRAMMING";
    printf("Before using strlwr() function : \n");
    printf("string_1 : %s \n", string_1);

    strlwr(string_1);

    printf("After using strlwr() function : \n");
    printf("string_1 : %s \n\n", string_1);

//-----------------------------------------------------------------------------------------------

    char string_2[20] = "programming";
    printf("Before using strupr() function : \n");
    printf("string_2 : %s \n", string_2);

    strupr(string_2);

    printf("After using strupr() function : \n");
    printf("string_2 : %s \n", string_2);
}
