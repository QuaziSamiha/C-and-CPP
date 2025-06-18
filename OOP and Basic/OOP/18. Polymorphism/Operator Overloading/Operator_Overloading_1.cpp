// Unary Operator Overloading
//? (11:57pm,19 May,2020 & 10:36am,19 August,2020) Upashahar, Rajshahi
//? 3 March, 2024 Arambag, Mirpur, Dhaka
//? 18 June, 2025 Ranavola, Uttora, Dhaka
#include <iostream>

using namespace std;

class class_name
{
    int m1, m2;

public:
    class_name()
    {
        // default constructor
    }
    class_name(int p1, int p2) // parameterized constructor
    {
        m1 = p1;
        m2 = p2;
    }
    void operator-(); // unary operator overloading prototype, overloading minus operator
    void member_function()
    {
        cout << endl;
        cout << " data_member_1 : " << m1 << endl;
        cout << " data_member_2 : " << m2 << endl;
    }
};

void class_name::operator-()
{
    m1 = -m1;
    m2 = -m2;
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

    class_name object_two(12, -30);

    cout << "Before : ";
    object_two.member_function();

    -object_two; // calling unary operator overloading

    cout << "After : ";
    object_two.member_function();

    return 0;
}

/**
 * output:
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
