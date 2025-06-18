// Function Overloading Ambiguous
//? (1:24am,17 May,2020 & 10:26am,19 August,2020)
//? 2024
//? 18 Jue, 2025
#include <iostream>

using namespace std;

void function_overloading(unsigned int);
void function_overloading(float);

int main()
{
    // function_overloading(10); this line show an error for not matching exactly

    function_overloading(10.5f); // f indicates float. it won't print
    return 0;
}

void function_overloading(float parameter)
{
    cout << "float : " << parameter << endl;
}

void function_overloading(unsigned int parameter)
{
    cout << "unsigned integer : " << parameter << endl;
}
