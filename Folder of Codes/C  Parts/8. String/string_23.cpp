// isalpha() function : test if a character is alphabet
// isupper() function : test if character is upper case letter
// islower() function : test if character is lower case letter
// isdigit() function : test if a character is a number
#include<stdio.h>
#include<ctype.h>

int main()
{
    char v1;
    printf("Enter any character : ");
    scanf("%c", &v1);

    if(isalpha(v1)) // using isalpha() function
    {
        printf("%c is an Alphabet \n", v1);

        if(isupper(v1)) // using isupper() function
        {
            printf("%c is a upper case latter \n", v1);
        }

        if(islower(v1)) // using islower() function
        {
            printf("%c is a lower case latter \n", v1);
        }
    }
    else
    {
        printf("%c is not an Alphabet \n", v1);
    }

    if(isdigit(v1)) // using isdigit() function
    {
        printf("%c is a number \n", v1);
    }
    else
    {
        printf("%c is not a number \n", v1);
    }
}
