// finding area of triangle
#include<stdio.h>

main()
{
    float variable_1, variable_2, variable_3;

    printf("Base = ");
    scanf("%f", &variable_1);
    printf("Height = ");
    scanf("%f", &variable_2);

//  variable_3 = 1/2 * variable_1 * variable_2;  1 and 2 are both integers. so division of 1/2 = 0.so type casting is necessary

    variable_3 = (float)1/2 * variable_1 * variable_2; // (float)1/2 = 0.5 but 1/2 = 0
    printf("Area of Triangle : %.2f \n", variable_3);

//  variable_3 = 0.5 * variable_1 * variable_2; // no need to type cast
//  variable_3 = 1/2.0 * variable_1 * variable_2;
//  variable_3 = 1.0/2 * variable_1 * variable_2;

}

