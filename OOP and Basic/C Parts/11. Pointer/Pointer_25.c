#include <stdio.h>
#define print(x) printf("%d ", x)
int x;
void Q(int z)
{
    z += x;
    print(z);
}
void P(int *y)
{
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    print(x);
}
main(void)
{
    x = 5;
    P(&x);
    print(x);
}
/*The output of this program is
A. 12 7 6 //? output

B
22 12 11

C
14 6 6

D
7 6 6

Explanation

x is global so first x becomes 5 by the first line in main(). Then main() calls P() with address of x.

// in main(void)

x = 5 // Change global x to 5
P(&x)
P() has a local variable named 'x' that hides global variable. P() then calls Q() by passing value of local 'x'.

// In P(int *y)

int x = *y + 2; // Local x = 7
Q(x);
In Q(int z), z uses x which is global

// In Q(int z)

z += x; // z becomes 5 + 7
printz(); // prints 12
After end of Q(), control comes back to P(). In P(), *y (y is address of global x) is changed to x - 1 (x is local to P()).

// Back in P()

 *y = x - 1; // *y = 7-1
 print(x); // Prints 7
After end of Q(), control comes back to main(). In main(), global x is printed.

// Back in main()

print(x); // prints 6 (updated in P()
          //           by *y = x - 1 )
          */