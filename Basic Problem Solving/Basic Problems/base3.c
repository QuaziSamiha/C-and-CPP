// conversion between octal and hexadecimal
// 15.02.24
// 07.09.24
#include <stdio.h>

int main()
{
    int n;
    printf("\nOctal Number  : ");
    scanf("%o", &n);
    printf("Hexa-decimal Number: %x", n);

    printf("\n\nHexa-decimal Number  : ");
    scanf("%x", &n);
    printf("Octal Number: %o", n);
    return 0;
}
