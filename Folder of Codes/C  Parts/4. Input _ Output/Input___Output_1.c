#include<stdio.h>

int main()
{
    int variable;
    printf("Enter an integer : ");
    scanf("%d", &variable);
    printf("Integer : %d \n", variable);

    int variable_1, variable_2;
    printf("\nEnter two integers : ");
    scanf("%d %d", &variable_1, &variable_2);
    printf("Integers are : %d %d \n", variable_1, variable_2);

    int variable_3, variable_4;
    printf("\nEnter two integers : ");
    scanf("%d", &variable_3);
    scanf("%d", &variable_4);
    printf("Integers are : %d %d \n", variable_3, variable_4);

    return 0;
}
