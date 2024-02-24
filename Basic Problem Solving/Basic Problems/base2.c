// conversion between decimal to Hexa-decimal
// 15.02.24
#include <stdio.h>

int main()
{
    int n;
    printf("\nDecimal Number  : ");
    scanf("%d", &n);
    printf("Hexa-decimal Number: %x", n);

    printf("\n\nHexa-decimal Number  : ");
    scanf("%x", &n);
    printf("Decimal Number: %d", n);
    return 0;
}
