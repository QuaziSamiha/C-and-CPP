// taking input and display string
#include<stdio.h>

int main()
{
    char string_1[20];
/*
    printf("Enter your full name : ");
    scanf("%s", &string_1); // scanf() function doesn't work after space

    printf("string : %s \n", string_1);
*/
    printf("Enter your full name : ");
    gets(string_1); // scanf() function doesn't work after space so we use gets() function

    printf("string : %s", string_1);
}
