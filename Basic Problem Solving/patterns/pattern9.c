#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; i >= j; j++)
        {
            printf("%c ", j + 64);
        }
        printf("\n");
    }
}

/*
A 
A B 
A B C 
A B C D 
A B C D E 
*/