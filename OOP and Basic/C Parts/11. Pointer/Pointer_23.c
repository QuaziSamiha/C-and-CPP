#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    ++*p;
    p += 2;
    printf("%d", *p);
    return 0;
}
/*
A
2
B. 3 //? correct answer
C
4
D
Compiler Error

Explanation

The expression ++*p is evaluated as "++(*p)" . So it increments the value of first element of array (doesn't change the pointer p).
When p += 2 is done, p is changed to point to third element of array. */