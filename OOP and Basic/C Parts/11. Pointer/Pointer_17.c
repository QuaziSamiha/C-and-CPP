#include <stdio.h>
int main()
{
    char *ptr = "GeeksQuiz";
    printf("%c", *&*&*ptr);

    printf("%s", *&*&ptr);
    return 0;
}

/*
The operator * is used for dereferencing and the operator & is used to get the address. These operators cancel out effect of each
other when used one after another. We can apply them alternatively any no. of times. In the above code, ptr is a pointer to first character of
string g. *ptr gives us g, &*ptr gives address of g, *&*ptr again g, &*&*ptr address of g, and finally *&*&*ptr gives ‘g’ Now try below
*/