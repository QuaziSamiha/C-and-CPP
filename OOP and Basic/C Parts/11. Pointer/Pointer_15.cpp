#include <stdio.h>

int main()
{
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;

    printf("%f ", *ptr2);
    printf("%d", ptr2 - ptr1);

    return 0;
}

// Output: 90.500000 3
/**
 * When we add a value x to a pointer p, the value of the resultant expression is p + x*sizeof(*p) where sizeof(*p) means size of data type pointed by p.
 * That is why ptr2 is incremented to point to arr[3] in the above code. Same rule applies for subtraction.
 * Note that only integral values can be added or subtracted from a pointer. We can also subtract or compare two pointers of same type.
 */