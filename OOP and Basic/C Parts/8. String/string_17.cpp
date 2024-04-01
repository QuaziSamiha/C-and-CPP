// number of capital-small letters in string
#include<stdio.h>

int main()
{
    char string_1[50];
    int i = 0, capital = 0, small = 0, digit = 0;

    printf("Enter a string : ");
    gets(string_1);

    while(string_1[i] != '\0')
    {
        if(string_1[i] >= 65 && string_1[i] <= 90)
        {
            capital++;
        }
        else if(string_1[i] >= 97 && string_1[i] <= 122)
        {
            small++;
        }
        else if(string_1[i] >= 48 && string_1[i] <= 57)
        {
            digit++;
        }
        i++;
    }

    printf("no. of capital letters : %d\n", capital);
    printf("no. of small letters : %d\n", small);
    printf("no. of digit : %d\n", digit);
}
