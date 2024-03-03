// printf() function
#include<stdio.h>

int main()
{
    int v1 = 2, v2 = 28, v3 = 100, v4 = 40000, v5 = 58730, v6 = 670000;

    // it crates 6 block
    printf("%6d \n", v1); // right justified
    printf("%6d \n", v2); // right justified
    printf("%6d \n", v3); // right justified
    printf("%6d \n", v4); // right justified
    printf("%6d \n", v5); // right justified
    printf("%6d \n\n", v6); // right justified

    // it creates 5 blocks
    printf("%-5d \n", v1); // left justified
    printf("%-5d \n", v2); // left justified
    printf("%-5d \n", v3); // left justified
    printf("%-5d \n", v4); // left justified
    printf("%-5d \n", v5); // left justified
    printf("%-5d \n\n", v6); // left justified

    // it creates 7 block among them one block is for + sign
    printf("%+7d \n", v1); // right justified with + sign
    printf("%+7d \n", v2); // right justified with + sign
    printf("%+7d \n", v3); // right justified with + sign
    printf("%+7d \n", v4); // right justified with + sign
    printf("%+7d \n", v5); // right justified with + sign
    printf("%+7d \n\n", v6); // right justified with + sign
}
