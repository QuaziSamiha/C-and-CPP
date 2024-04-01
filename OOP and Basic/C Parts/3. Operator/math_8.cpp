// quadratic equation = ax*x + bx + c
#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, d, x1, x2;

    printf("a : ");
    scanf("%lf", &a);
    printf("b : ");
    scanf("%lf", &b);
    printf("c : ");
    scanf("%lf", &c);

    d = sqrt(b*b - 4*a*c);
    x1 = (-b+d)/(2*a);
    x1 = (-b-d)/(2*a);

    printf("x1 : %lf \n", x1);
    printf("x2 : %lf \n", x2);

}

// x1 = (-b+sqrt(b*b-4ac))/2a
// x2 = (-b-sqrt(b*b-4ac))/2a
// d = sqrt(b*b-4ac)
