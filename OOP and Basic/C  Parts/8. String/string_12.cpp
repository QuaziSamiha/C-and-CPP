// reverse of string without using strrev() function
#include<stdio.h>

int main()
{
    char string_1[30] = "C Programming";
    char string_2[30];

    int i, length = 0, j;

    i = 0;
    while(string_1[i] != '\0')
    {
        i++;
        length++;
    }

    for(j = 0,i = length-1; i >= 0; i--,j++)
    {
        string_2[j] = string_1[i];
    }
    string_2[j] = '\0';

    printf("string_1 : %s \n", string_1);
    printf("string_2 : %s \n", string_2);
}
