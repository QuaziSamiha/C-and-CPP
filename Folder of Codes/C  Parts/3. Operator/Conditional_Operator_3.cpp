#include<stdio.h>

int main()
{
    int v1, v2;

    printf("Enter integer v1 : ");
    scanf("%d", &v1);
    printf("Enter integer v2 : ");
    scanf("%d", &v2);

    (v1>v2)? printf("v1 is greater than v2 \n") : printf("v2 is greater than v1 \n");
}
