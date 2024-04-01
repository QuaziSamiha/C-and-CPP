// Fahrenheit to Centigrade
#include<stdio.h>

int main()
{
    float C, F;

    printf("Enter Fahrenheit : ");
    scanf("%f", &F);

    C = (F-32)/1.8;

    printf("\nCentigrade : %.2f \n", C);
}

// (C/5) = (F-32)/9
