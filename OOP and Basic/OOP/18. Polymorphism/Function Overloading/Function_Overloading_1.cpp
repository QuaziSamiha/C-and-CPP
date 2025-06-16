// Function Overloading in Terms of Type of Arguments       (11:31pm,16 May,2020 & 10:10am,19 August,2020)
#include <iostream>

using namespace std;

// prototype of functions
int function_overloading(int);
double function_overloading(double);
char function_overloading(char);
double function_overloading(int, double);
int function_overloading(int, int);

int main()
{
    cout << "integer           : " << function_overloading(10) << endl;
    cout << "double            : " << function_overloading(12.34) << endl;
    cout << "char              : " << function_overloading('c') << endl;
    cout << "integer + double  : " << function_overloading(11, 33.23) << endl;
    cout << "integer + integer : " << function_overloading(13, 14) << endl;

    return 0;
}

int function_overloading(int parameter_1)
{
    return parameter_1;
}

double function_overloading(double parameter_1)
{
    return parameter_1;
}

char function_overloading(char parameter_1)
{
    return parameter_1;
}

double function_overloading(int parameter_1, double parameter_2)
{
    return (parameter_1 + parameter_2);
}

int function_overloading(int parameter_1, int parameter_2)
{
    return (parameter_1 + parameter_2);
}
