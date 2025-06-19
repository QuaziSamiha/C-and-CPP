#include <stdio.h>
int main()
{
    int a = 12;
    void *ptr = (int *)&a;
    printf("%d", *ptr);
    // printf("%d", *(int *)ptr);
    getchar();
    return 0;
}
/*
A
12
B
Compiler Error
C
Runt Time Error
D
0
Discuss it
Explanation

There is compiler error in line "printf("%d", *ptr);". void * type pointers cannot be de-referenced. We must type cast them before de-referencing. The following program works fine and prints 12.
#include<stdio.h>

int main()
{
    int a = 12;
    void *ptr = (int *)&a;
    printf("%d", *(int *)ptr);
    getchar();
    return 0;
}*/