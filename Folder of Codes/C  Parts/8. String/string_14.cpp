// string swapping
#include<stdio.h>
#include<string.h>

int main()
{
    char string_1[10] = "Samiha";
    char string_2[10] = "Akku";
    char string_3[10];

    printf("Before Swapping : \n");
    printf("string_1 : %s \n", string_1);
    printf("string_2 : %s \n\n", string_2);

    strcpy(string_3,string_1);
    strcpy(string_1,string_2);
    strcpy(string_2,string_3);

    printf("After Swapping : \n");
    printf("string_1 : %s \n", string_1);
    printf("string_2 : %s \n", string_2);
}
