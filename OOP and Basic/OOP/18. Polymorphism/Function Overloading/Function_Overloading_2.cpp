// Function Overloading in Terms of Numbers of Arguments  (11:46pm,16 May,2020 & 10:17am,19 August,2020)
#include <iostream>

using namespace std;

int function_overloading(int);
int function_overloading(int, int);
int function_overloading(int, int, int);

int main()
{
    cout << "integer                     : " << function_overloading(10) << endl;
    cout << "integer + integer           : " << function_overloading(12, 21) << endl;
    cout << "integer + integer + integer : " << function_overloading(12, 32, 42) << endl;
    return 0;
}

int function_overloading(int parameter)
{
    return parameter;
}

int function_overloading(int parameter_1, int parameter_2)
{
    return (parameter_1 + parameter_2);
}

int function_overloading(int parameter_1, int parameter_2, int parameter_3)
{
    return (parameter_1 + parameter_2 + parameter_3);
}
