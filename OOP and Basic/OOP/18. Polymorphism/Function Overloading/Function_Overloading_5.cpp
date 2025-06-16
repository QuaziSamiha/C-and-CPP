// match through promotion  (12:35am,17 May,2020 & 10:21am,19 August,2020)
#include <iostream>

using namespace std;

void function_overloading(char *);
void function_overloading(int); // alternative of char

int main()
{
    char variable = 'a';
    function_overloading(variable);

    return 0;
}

void function_overloading(int parameter)
{
    cout << "integer : " << parameter << endl;
}

void function_overloading(char *parameter) // exact match
{
    cout << "char : " << *parameter << endl;
}
