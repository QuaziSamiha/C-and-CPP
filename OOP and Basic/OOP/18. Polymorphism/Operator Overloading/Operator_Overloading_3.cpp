// Binary Operator Overloading
//? (12:34am,20 May,2020 & 11:00am,19 August,2020)
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
    void operator+(class_name object_1); // binary operator overloading
};

void class_name::operator+(class_name object_1)
{
    class_name object;
    // cout << object_1.data_member_1 << endl;
    // cout << data_member_1 << endl;
    object.data_member_1 = data_member_1 + object_1.data_member_1;
    object.data_member_2 = data_member_2 + object_1.data_member_2;

    cout << "After operation : " << endl;
    cout << "data_member_1 : " << object.data_member_1 << endl;
    cout << "data_member_2 : " << object.data_member_2 << endl;
}

int main()
{
    class_name object_one(10, 20);
    class_name object_two(2, 4);

    object_one + object_two; // calling operator function
    return 0;
}

/*

After operation :
data_member_1 : 12
data_member_2 : 24

*/