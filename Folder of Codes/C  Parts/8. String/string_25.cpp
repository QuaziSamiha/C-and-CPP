// tolower() function : convert upper case to lower case
// touper() function : convert lower case to upper case
#include<stdio.h>
#include<ctype.h>

int main()
{
    char v1;
    printf("Enter a upper case character : ");
    scanf("%c", &v1);

    printf("Before using tolower() function : \n");
    printf("v1 : %c \n", v1);
    printf("After using tolower() function : \n");
    printf("v1 : %c \n\n", tolower(v1));
//----------------------------------------------------------------------------------------------------
    char v2;
    printf("Enter a lower case character : ");
    scanf(" %c", &v2);

    printf("Before using toupper() function : \n");
    printf("v2 : %c \n", v2);
    printf("After using toupper() function : \n");
    printf("v2 : %c \n", toupper(v2));

}
