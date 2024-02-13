// clear screen system cls function
#include<stdio.h>

int main()
{
    printf("Hello!");
    getch();

    system("cls"); // instead of clrscr() function

    printf("Bye");
}
