// x raised to the power y
#include<stdio.h>

int main()
{
    int x, y;

    printf("x : ");
    scanf("%d", &x);
    printf("y : ");
    scanf("%d", &y);

    double v = pow(x,y);

    printf("\n%d to the power %d is %.2lf \n", x, y, v);
}
