// finding number of vowel, consonant, word, digits and other in a string
#include<stdio.h>

int main()
{
    char string_1[100], v;
    int i, vowel = 0, consonant = 0, word = 0, digit = 0, other = 0;

    printf("Enter a string : ");
    gets(string_1);

    i = 0;
    while((v = string_1[i]) != '\0')
    {
        if(v = 'a')||(v = 'e')||(v = 'i')||(v = 'o')||(v = 'u')||(v = 'A')||(v = 'E')||(v = 'I')||(v = 'O')||(v = 'U'))
        {
            vowel++;
        }
        if(((v >= 'a') && (v <= 'z')) || ((v >= 'A') && (v <= 'Z')))
        {
            consonant++;
        }
        else if(v >= 0 && v <= 9)
        {
            digit++;
        }
        else if(v == ' ')
        {
            word++;
        }
        else
        {
            other++;
        }
        i++;
    }
    word++;

    printf("Number of vowels : %d \n", vowel);
    printf("Number of consonants : %d \n", consonant);
    printf("Number of digits : %d \n", digit);
    printf("Number of words : %d \n", word);
    printf("Number of others : %d \n", other);

}
