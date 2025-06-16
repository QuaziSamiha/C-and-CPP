#include <iostream>

using namespace std;

// Pointer in Derived Class

class super_class
{
    int data_member_1;

public:
    int data_member_2 = 50;
    void member_function_1_super_class(int parameter)
    {
        data_member_1 = parameter;
    }
    void member_function_2_super_class()
    {
        cout << "Super Class " << endl;
        cout << "data_member_1 : " << data_member_1 << endl;
        cout << "data_member_2 : " << data_member_2 << endl;
    }
};

class sub_class : public super_class
{
    int data_member;

public:
    void member_function_1_sub_class(int parameter)
    {
        data_member = parameter;
    }
    void member_function_2_sub_class()
    {
        cout << "\nSub Class : " << endl;
        cout << "data_member : " << data_member << endl;
    }
};

int main()
{
    super_class object_one;

    super_class *pointer; // creation pointer object of super-class

    pointer = &object_one; // assigning address of object of super-class

    pointer->member_function_1_super_class(15); // accessing super-class's member=function's through object
    pointer->member_function_2_super_class();   // accessing super-class's member=function's through object

    sub_class object_two;

    pointer = &object_two; // assigning address of object of sub-class

    //  pointer->member_function_1_sub_class(115); // it will  show an error
    //  pointer->member_function_2_sub_class(); // it will  show an error

    return 0;
}
