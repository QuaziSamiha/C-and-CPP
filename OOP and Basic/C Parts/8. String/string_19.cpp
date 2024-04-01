// array of string
#include<stdio.h>
#include<string.h>

int main()
{
    char string_1[2][10];

    printf("Enter two string : ");
    scanf("%s %s", &string_1[0], &string_1[1]);

    printf("string_1[0] : %s \n", string_1[0]);
    printf("string_1[1] : %s \n\n", string_1[1]);

    printf("string_1[0][2] : %c \n", string_1[0][2]);
}
