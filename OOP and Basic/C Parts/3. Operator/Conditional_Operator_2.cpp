#include<stdio.h>

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    printf("%s \n", number>=50? "Passed":"Failed");
}
