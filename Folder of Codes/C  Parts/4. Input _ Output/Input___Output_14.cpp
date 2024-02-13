// conversion between decimal and hexa-decimal
#include<stdio.h>

int main()
{
    int variable_1;

    printf("Enter Decimal number : ");
    scanf("%d", &variable_1); // 10 as input = output : a

    printf("Hexa-decimal number : %x \n", variable_1);

//-----------------------------------------------------------------------------------------------------

    int variable_2;

    printf("\nEnter hexa-decimal number : ");
    scanf("%x", &variable_2); // input a

    printf("Decimal number : %d \n", variable_2); // output 10

    return 0;
}

