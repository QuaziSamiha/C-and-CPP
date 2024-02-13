// passing character type array to user defined function
// passing string to user defined function
#include<stdio.h>

void function_name(char parameter[])
{
    int i = 0;
    while(parameter[i] != '\0')
    {
        printf("%c \n", parameter[i]);
        i++;
    }
}

int main()
{
   char string_name[] = "C programming";

   function_name(string_name);
}

