// conversion between decimal and octal
#include<stdio.h>

int main()
{
    int variable_1;

    printf("Enter Decimal number : ");
    scanf("%d", &variable_1);

    printf("Octal number : %o \n", variable_1);

//-----------------------------------------------------------------------------------------------------

    int variable_2;

    printf("\nEnter octal number : ");
    scanf("%o", &variable_2);

    printf("Decimal number : %d \n", variable_2);

    return 0;
}
