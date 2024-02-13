// area of circle = 3.1416 * radius * radius
#include<stdio.h>
#include<math.h> // using for M_PI

int main()
{
    float radius, PI = 3.1416, area;

    printf("Enter radius : ");
    scanf("%f", &radius);

//  area = 3.1416 * radius * radius;

    area = M_PI * radius * radius;

    printf("\nArea of Circle : %.4f \n", area);

//  area = PI * radius * radius;
}
