// convert Lower case letter to upper case
// 15.02.24
// 07.09.24
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a lower case letter  : ");
    scanf("%c", &ch);
    // 97-65 = 32
    printf("Upper Case: %c", ch - 32);
    printf("\nUpper Case: %c", toupper(ch));
    return 0;
}

// capital A = ascii value 65
// small a = ascii value 97
