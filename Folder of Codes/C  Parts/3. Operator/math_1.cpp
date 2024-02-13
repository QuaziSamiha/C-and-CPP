// given value of three hands of a triangle. find out the area
#include<stdio.h>
#include<math.h> // using for sqrt() function

int main()
{
    double a, b, c, area, s;

    printf("Enter three values : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("\nArea : %.3lf \n", area);
}
