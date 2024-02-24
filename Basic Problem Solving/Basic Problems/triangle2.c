// 15.02.24
#include <stdio.h>
#include<math.h>

// s = (a+b+c)/2
// area = {s*(s-a)*(s-b)*(s-c)}^0.5

int main()
{
    double s, a, b, c, area;
    printf("Enter 3 sides of a triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area: %.2lf", area);
    return 0;
}
