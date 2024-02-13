#include<stdio.h>

int main()
{
    float variable;
    printf("Enter a float : ");
    scanf("%f", &variable);
    printf("float : %f \n", variable);

    float variable_1, variable_2;
    printf("\nEnter two float numbers : ");
    scanf("%f %f", &variable_1, &variable_2);
    printf("floats are : %.1f %.3f \n", variable_1, variable_2);

    return 0;
}
