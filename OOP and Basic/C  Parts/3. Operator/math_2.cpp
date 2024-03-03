// area of rectangle = width * length
#include<stdio.h>

int main()
{
    float width, length, area;

    printf("Length : ");
    scanf("%f", &length);
    printf("Width : ");
    scanf("%f", &width);

    area = length * width;

    printf("\nArea of Rectangle = %.3f \n", area);
}
