// display string character-wise
#include<stdio.h>

int main()
{
    char string_1[] = "Samiha";
    int i;

    i = 0;
    while(string_1[i] != '\0')
    {
        printf("%c \n", string_1[i]);
        i++;
    }
}
