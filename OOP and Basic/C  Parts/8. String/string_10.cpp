// string compare using strcmp()
#include<stdio.h>
#include<string.h>

int main()
{
    char string_1[50] = "I am learning ";
    char string_2[] = "C programing";

    int variable = strcmp(string_1, string_2);

    if(variable == 0)
    {
        printf("strings are equal \n");
    }
    else
    {
        printf("strings are  not equal \n");
    }
}
