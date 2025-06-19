#include <stdio.h>
void fun(int arr[])
{
    int i;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int i;
    int arr[4] = {10, 20, 30, 40};
    fun(arr);
    return 0;
}
// A
// 10 20 30 40
// B. Machine Dependent //? output
// C
// 10 20
// D
// Northing
// Discuss it
// Explanation

// In C, array parameters are always treated as pointers. So following two statements have the same meaning.
// void fun(int arr[])
// void fun(int *arr)

// [] is used to make it clear that the function expects an array, it doesn’t change anything though. People use it only for readability so that the reader is clear about the intended parameter type. The bottom line is, sizeof should never be used for array parameters, a separate parameter for array size (or length) should be passed to fun(). So, in the given program, arr_size contains ration of pointer size and integer size, this ration= is compiler dependent.

// #include <stdio.h>
// void fun(int arr[], size_t arr_size)
// {
//     int i;
//     for (i = 0; i < arr_size; i++)
//         printf("%d ", arr[i]);
// }

// int main()
// {
//     int i;
//     int arr[] = {10, 20, 30, 40};

//     // Use of sizeof is fine here
//     int n = sizeof(arr) / sizeof(arr[0]);
//     fun(arr, n);
//     return 0;
// }
// Output: 10 20 30 40