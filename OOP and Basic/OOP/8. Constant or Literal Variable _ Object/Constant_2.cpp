#include <iostream> // (1:28am,6 May,2020 & 12:28pm,16 August,2020)

using namespace std;

// constant variable cannot be changed. we can only use it.

int main()
{
    int variable_2 = 6, variable_3;
    const int constant_variable = 5; // declaring and assigning value of constant variable

    cout << endl
         << "constant_variable : " << constant_variable << endl;

    variable_3 = variable_2 + constant_variable;
    cout << "variable_2 + constant_variable : " << variable_3 << endl;

    return 0;
}

/*
const keyword stands for constant. In C++ it is used to make some values constant throughout the program. If we make an
artifact of a C++ program as constant then its value cannot be changed during the program execution.

While declaring a variable as const it must be initialized as well. Once declared as const then we cannot change its value later.
*/
