// Function Overloading Exact Match
//? (1:24am,17 May,2020 & 10:10am,19 August,2020)
//? 2024
//? 18 Jue, 2025
#include <iostream>

using namespace std;

void function_overloading(int);
void function_overloading(char);

int main()
{
    function_overloading(10);
    return 0;
}

void function_overloading(int parameter) // exact match
{
    cout << "integer : " << parameter << endl;
}

void function_overloading(char parameter)
{
    cout << "char : " << parameter << endl;
}
