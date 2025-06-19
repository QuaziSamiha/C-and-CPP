#include <stdio.h>
void f(char **);
int main()
{
    char *argv[] = {"ab", "cd", "ef", "gh", "ij", "kl"};
    f(argv);
    return 0;
}
void f(char **p)
{
    char *t;
    t = (p += sizeof(int))[-1];
    printf("%s\\n", t);
}
/*

A
ab
B
cd
C
ef
D. gh //? correct answer


Explanation:
argv is a pointer array of type char. So it contains character pointers like ab, cd, etc. f(argv) in this call
we give address of the first char pointer ab. in function f , t = ( argv[0] += 4 (its size of int) [-1] .
after this evaluation t points to ij but after [-1] t will point to gh*/