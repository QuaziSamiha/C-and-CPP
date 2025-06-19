#include <stdio.h>
//? 19 June, 2025
int main()
{
    int arri[] = {1, 2, 3};
    int *ptri = arri;

    char arrc[] = {1, 2, 3};
    char *ptrc = arrc;

    printf("sizeof arri[] = %d ", sizeof(arri));
    printf("sizeof ptri = %d ", sizeof(ptri));

    printf("sizeof arrc[] = %d ", sizeof(arrc));
    printf("sizeof ptrc = %d ", sizeof(ptrc));

    return 0;
}
/*
A. sizeof arri[] = 3 sizeof ptri = 4 sizeof arrc[] = 3 sizeof ptrc = 4

B. sizeof arri[] = 12 sizeof ptri = 4 sizeof arrc[] = 3 sizeof ptrc = 1

C. sizeof arri[] = 3 sizeof ptri = 4 sizeof arrc[] = 3 sizeof ptrc = 1

D. sizeof arri[] = 12 sizeof ptri = 4 sizeof arrc[] = 3 sizeof ptrc = 4
*/

/*Explanation Size of an array is number of elements multiplied by the type of element, that is why we get sizeof arri as 12 and sizeof arrc as 3.
Size of a pointer is fixed for a compiler. All pointer types take same number of bytes for a compiler. That is why we get 4 for both ptri and ptrc. */