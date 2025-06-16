#include <iostream>

using namespace std;

// Returning Current Object Using this Pointer

class class_name
{
    int data_member;

public:
    class_name &member_function_1(class_name &object_1, class_name &object_2) // Passing Object as Function Argument & Returning Object
    {
        object_1.data_member = 87;
        object_2.data_member = 110;

        if (object_1.data_member > object_2.data_member)
        {
            return object_1;
        }
        else
        {
            return *this;
        }
    }
    void member_function_2()
    {
        cout << data_member << endl;
    }
};

int main()
{
    class_name object_one, object_two, object_three;

    // here current object is object_one
    object_three = object_one.member_function_1(object_one, object_two); // this pointer holds address of the object by which function is called
    object_three.member_function_2();

    // here current object is object_two
    object_three = object_two.member_function_1(object_one, object_two); // this pointer holds address of the object by which function is called
    object_three.member_function_2();

    return 0;
}
