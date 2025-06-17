#include <iostream>
//? (10:55pm,9 May,2020 & 10:48pm,16 August,2020)
//? 29 August, 2024
//? 17 June, 2025
using namespace std;

// parameterized constructor

class class_name
{
public:
    class_name(int, int); // declaring parameterized constructor
};

class_name::class_name(int parameter_1, int parameter_2) // defining parameterized constructor
{
    cout << " parameter_1 : " << parameter_1 << endl;
    cout << " parameter_2 : " << parameter_2 << endl;
}

int main()
{
    cout << "Explicitly Called : " << endl;
    class_name object_1 = class_name(12, 15); // calling constructor explicitly

    cout << "Implicitly Called : " << endl;
    class_name object_2(20, 24); // calling constructor implicitly or shorthand method
    return 0;
}
