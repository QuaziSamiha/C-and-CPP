// lower to upper case letter without using library function
// upper to lower case letter without using library function
#include<stdio.h>

int main()
{
    char variable_1;
    printf("Enter any lower case letter : ");
    scanf("%c", &variable_1);

    printf("\nUpper case : %c \n\n", (variable_1-32));  // ASCII value of A = 65 and a = 97 so 65-97 = -32

//--------------------------------------------------------------------------------------------------------------

    char variable_2;
    printf("Enter any upper case letter : ");
    scanf(" %c", &variable_2);

    printf("\nLower case : %c \n", (variable_2+32));  // ASCII value of A = 65 and a = 97 so 97-65 = 32

}
