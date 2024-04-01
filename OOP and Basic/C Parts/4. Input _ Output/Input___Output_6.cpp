// printf() function
#include<stdio.h>

int main()
{
    float v1 = 8.358416, v2 = 35.434565, v3 = 134.456576, v4 = 2654.453456;

    // it will print two digits after decimal point
    printf("%0.2f \n", v1); // left justified without any space preceding
    printf("%0.2f \n", v2);
    printf("%0.2f \n", v3);
    printf("%0.2f \n\n", v4);

    // it creates 7 blocks and print two digits after decimal point
    printf("%7.2f \n", v1); // left justified
    printf("%7.2f \n", v2);
    printf("%7.2f \n", v3);
    printf("%7.2f \n\n", v4);

    printf("%0.3e \n\n", v1); // left justified in exponential form
}
