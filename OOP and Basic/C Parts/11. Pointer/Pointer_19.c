#include <stdio.h>
void f(int *p, int *q)
{
    p = q;
    *p = 2;
}
int i = 0, j = 1;
int main()
{
    f(&i, &j);
    printf("%d %d", i, j);
    getchar();
    return 0;
}
// A
// 2 2

// B
// 2 1

// C
// 0 1

// D
// 0 2

// Discuss it
// Explanation

// See below f() with comments for explanation.

// /* p points to i and q points to j */
// void f(int *p, int *q)
// {
//   p = q;    /* p also points to j now */
//  *p = 2;   /* Value of j is changed to 2 now */
// }

/**

 */