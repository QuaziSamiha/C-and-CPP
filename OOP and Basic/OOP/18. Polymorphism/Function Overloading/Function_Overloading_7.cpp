// c++ consider decimal number as double  (1:23am,17 May,2020 & 10:33am,19 August,2020)
#include <iostream>

using namespace std;

void function_overloading(double);
void function_overloading(float);

int main()
{
    function_overloading(10.5); // c++ consider decimal number as double

    function_overloading(12.5f);
    function_overloading(9.38F);
    return 0;
}

void function_overloading(float parameter)
{
    cout << "float : " << parameter << endl;
}

void function_overloading(double parameter)
{
    cout << "double : " << parameter << endl;
}
