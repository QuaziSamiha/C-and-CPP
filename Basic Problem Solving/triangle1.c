// 15.02.24
#include <stdio.h>

int main()
{
    float base, height, area;
    printf("base: ");
    scanf("%f", &base);
    printf("height: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("area: %f", area);
    return 0;
}
