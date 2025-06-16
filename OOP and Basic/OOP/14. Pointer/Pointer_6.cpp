#include <iostream>

using namespace std;

// Pointers to Object : pointer will hold address of an object

class class_name
{
    int data_member_1;

public:
    int data_member_2;
    void member_function_1(int parameter)
    {
        data_member_1 = parameter;
    }
    void member_function_2()
    {
        cout << "data_member_1 : " << data_member_1 << endl;
        cout << "data_member_2 : " << data_member_2 << endl;
    }
};

int main()
{
    class_name object;
    class_name *pointer_object;

    pointer_object = &object; // initialization

    //  class_name *pointer_object = &object; // another way

    // accessing members using pointer object using arrow operator
    pointer_object->data_member_2 = 11;
    pointer_object->member_function_1(15);
    pointer_object->member_function_2();

    // accessing members using pointer object another way using dot operator
    (*pointer_object).data_member_2 = 24;
    (*pointer_object).member_function_1(32);
    (*pointer_object).member_function_2();

    return 0;
}
