#include<stdio.h>

int main()
{
    int variable_1;
    float variable_2;

    printf("Enter an integer and a float : ");
    scanf("%d %f", &variable_1, &variable_2);
    printf("Integer and Float : %d %.3f \n", variable_1, variable_2);

    return 0;
}
