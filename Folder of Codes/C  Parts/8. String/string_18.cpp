#include<stdio.h>
#include<string.h>

int main()
{
    char string_1[7];

    printf("Enter a string : ");
    scanf("%s ", string_1); // here & is not mandatory
    printf("string_1 : %s \n\n", string_1);

    char string_2[20] = "JavaProgramming";
    printf("string_2 : %10.4s \n", string_2);
}
