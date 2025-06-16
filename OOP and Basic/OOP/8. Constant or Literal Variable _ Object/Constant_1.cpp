#include <iostream> // (1:28am,6 May,2020 & 12:28pm,16 August,2020)

using namespace std;

// constant variable cannot be changed. we can only use it.

int main()
{
    int variable = 5;
    variable = variable + 2;
    cout << "variable : " << variable << endl;

    const int constant_variable = 5; // declaring and assigning value of constant variable
                                     //  constant_variable_1 = constant_variable_1+2; it will show an error
    cout << "constant_variable : " << constant_variable << endl;
}

/*
const keyword stands for constant. In C++ it is used to make some values constant throughout the program. If we make an
artifact of a C++ program as constant then its value cannot be changed during the program execution.

While declaring a variable as const it must be initialized as well. Once declared as const then we cannot change
its value later.
*/
