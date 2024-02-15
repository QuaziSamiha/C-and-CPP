// convert upper case letter to lower case
// 15.02.24
#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("Enter a upper case letter  : ");
    scanf("%c", &ch);
    // 97-65 = 32
    printf("Lower Case: %c", ch+32);
    printf("\nLower Case: %c", tolower(ch));
    
    return 0;
}

// capital A = ascii value 65
// small a = ascii value 97
