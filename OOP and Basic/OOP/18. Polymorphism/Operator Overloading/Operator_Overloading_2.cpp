// Unary Operator Overloading Using Friend Function
//? (11:55pm,19 May,2020 & 10:49am, 19 August,2020)
//? 2024
//? 18 June, 2025
#include <iostream>

using namespace std;

class class_name
{
    int data_member_1, data_member_2;

public:
    class_name()
    {
        // default constructor
    }
    class_name(int parameter_1, int parameter_2) // parameterized constructor
    {
        data_member_1 = parameter_1;
        data_member_2 = parameter_2;
    }
    friend void operator-(class_name &object_1); // unary operator overloading prototype, overloading minus operator
    void member_function()
    {
        cout << endl;
        cout << " data_member_1 : " << data_member_1 << endl;
        cout << " data_member_2 : " << data_member_2 << endl;
    }
};

void operator-(class_name &object_1) // here we have to pass by reference
{
    object_1.data_member_1 = -object_1.data_member_1;
    object_1.data_member_2 = -object_1.data_member_2;
}

int main()
{
    class_name object_one(11, 34);

    cout << "Before : ";
    object_one.member_function();

    -object_one; // calling unary operator overloading

    cout << "After : ";
    object_one.member_function();
    cout << endl;

    //-------------------------------------------------------------------------------------------
    class_name object_two(12, -30);

    cout << "Before : ";
    object_two.member_function();

    -object_two; // calling unary operator overloading

    cout << "After : ";
    object_two.member_function();
    return 0;
}

/*
Before :
 data_member_1 : 11
 data_member_2 : 34
After :
 data_member_1 : -11
 data_member_2 : -34

Before :
 data_member_1 : 12
 data_member_2 : -30
After :
 data_member_1 : -12
 data_member_2 : 30
*/
