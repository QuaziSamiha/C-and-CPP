// concatenation of string without using strcat() function
#include<stdio.h>

int main()
{
    char string_1[50] = "I am learning ";
    char string_2[] = "C programing";

    int i, length = 0, j;

    i = 0;
    while(string_1[i] != '\0')
    {
        i++;
        length++;
    }

    j = 0;
    while(string_2[j] != '\0')
    {
        string_1[length+j] = string_2[j];
        j++;
    }

    printf("string_1 : %s \n", string_1);
    printf("string_2 : %s \n", string_2);
}

