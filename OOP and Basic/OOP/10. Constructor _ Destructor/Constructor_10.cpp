// copy constructor
//? (10:57pm,10 May,2020 & 10:56pm,16 August,2020)
#include <iostream>

using namespace std;

// A copy constructor is a member function which initializes an object using another object of the same class.

class class_name
{
    int data_member_1;
    int data_member_2;

public:
    class_name(int parameter_1, int parameter_2) // declaring and defining parameterized constructor
    {
        data_member_1 = parameter_1;
        data_member_2 = parameter_2;
    }

    class_name(class_name &object); // declaring copy constructor

    void member_function()
    {
        cout << "data_member_1 : " << data_member_1 << endl;
        cout << "data_member_2 : " << data_member_2 << endl;
    }
};

class_name::class_name(class_name &object) // defining copy constructor
{
    data_member_1 = object.data_member_1; // initializing through object
    data_member_2 = object.data_member_2; // initializing through object
}

int main()
{
    cout << "Parameterized Constructor Output : " << endl;
    class_name object_one(12, 45); // calling parameterized constructor implicitly
    object_one.member_function();  // calling member function through object

    cout << "Copy Constructor Output : " << endl;
    class_name object_two(object_one); // calling copy constructor implicitly
    object_two.member_function();      // calling member function through object

    return 0;
}
