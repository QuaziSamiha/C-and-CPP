#include<stdio.h>

int main()
{
    char v1[7] = "INDIA";
    char v2[10] = "AMERICA";
    char v3[10] = "PAKISTAN";
    char v4[5] = "UAE";

    // left justified
    printf("%s \n", v1);
    printf("%s \n", v2);
    printf("%s \n", v3);
    printf("%s \n\n", v4);

    // right justified : it creates 8 blocks
    printf("%8s \n", v1);
    printf("%8s \n", v2);
    printf("%8s \n", v3);
    printf("%8s \n\n", v4);

    // right justified and only first three letters
    printf("%10.3s \n", v1);
    printf("%10.3s \n", v2);
    printf("%10.3s \n\n", v3);

    // left justified and only first three letters
    printf("%-10.3s \n", v1);
    printf("%-10.3s \n", v2);
    printf("%-10.3s \n\n", v3);

    // print only first three letters
    printf("%.3s \n", v1);
    printf("%.3s \n", v2);
    printf("%.3s \n\n", v3);
}
