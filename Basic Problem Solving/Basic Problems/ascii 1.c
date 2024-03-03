// convert ASCII value to Character
// 15.02.24
#include<stdio.h>

int main(){
    int n;
    printf("Enter any ASCII value: ");
    scanf("%d", &n);
    printf("ASCII Character %c", n);
    return 0;
}


// capital A = ascii value 65
// small a = ascii value 97

/*
ASCII stands for American Standard Code for Information Interchange. It's a character encoding standard 
for electronic communication. In ASCII, each character is represented by a 7-bit binary number (0 to 127), 
which corresponds to a particular symbol or character. For example, the ASCII value for the letter 'A' is 65, 
'B' is 66, and so on.
However, with extended ASCII, which uses 8 bits (0 to 255), more characters can be represented, including 
special characters, symbols, and accented letters.

Here's a basic example of ASCII values for some common characters:

- 'A' has an ASCII value of 65
- 'B' has an ASCII value of 66
- 'a' has an ASCII value of 97
- '1' has an ASCII value of 49
- Space has an ASCII value of 32
- The newline character ('\n') has an ASCII value of 10

These values are used by computers to represent characters internally and in data transmission.
*/