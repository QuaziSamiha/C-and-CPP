// conversion between decimal to octal
// 15.02.24
// 07.09.24
#include <stdio.h>

int main()
{
    int n;
    printf("\nDecimal Number  : ");
    scanf("%d", &n);
    printf("Octal Number: %o", n);

    printf("\n\nOctal Number  : ");
    scanf("%o", &n);
    printf("Decimal Number: %d", n);
    return 0;
}