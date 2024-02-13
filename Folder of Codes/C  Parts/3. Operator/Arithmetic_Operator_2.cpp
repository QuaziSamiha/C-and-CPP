// sum of two integers and find out their average
#include<stdio.h>

main()
{
    int variable_1, variable_2, variable_3;
    float variable_4;

    printf("Enter two integers : ");
    scanf("%d %d", &variable_1, &variable_2);

    variable_3 = variable_1 + variable_2;  // addition operator
    printf("Addition : %d \n", variable_3);

    variable_4 = variable_3/2; // (7/2 = 3.00)
    printf("Average : %.2f \n", variable_4);

    variable_4 = (float)variable_3/2; // type casting (7/2 = 3.50)
    printf("Average : %.2f \n", variable_4);

    variable_4 = variable_3/2.0; // (7/2 = 3.50)
    printf("Average : %.2f \n", variable_4);
}

