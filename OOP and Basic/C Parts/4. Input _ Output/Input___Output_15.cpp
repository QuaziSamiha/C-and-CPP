// conversion between octal and hexa-decimal
#include<stdio.h>

int main()
{
    int variable_1;

    printf("Enter Hexa-decimal number : ");
    scanf("%x", &variable_1); // 10 as input = output : a

    printf("Octal number : %o \n", variable_1);

//-----------------------------------------------------------------------------------------------------

    int variable_2;

    printf("\nEnter Octal number : ");
    scanf("%o", &variable_2); // input a

    printf("Hexa-decimal number : %x \n", variable_2); // output 10

    return 0;
}

