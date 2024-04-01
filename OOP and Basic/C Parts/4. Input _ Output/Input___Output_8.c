// getchar(), getche() and getch() function
#include<stdio.h>

int main()
{
    char v;

    printf("Enter a value : ");
    v = getchar();
    printf("Entered : %c \n", v);

    printf("Enter a value : ");
    v = getche();
    printf("\nEntered : %c \n", v);

    printf("\nEnter a value : ");
    v = getch();
    printf("\nEntered : %c \n", v);
}

