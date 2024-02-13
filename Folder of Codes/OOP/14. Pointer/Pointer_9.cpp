#include<iostream>

using namespace std;

// Passing Object as Function Argument & Returning Object

class class_name
{
    int data_member;
public :
    class_name  member_function_1(class_name  object_1, class_name  object_2)//Passing Object as Function Argument & Returning Object
    {
        object_1.data_member = 87;
        object_2.data_member = 12;

        if(object_1.data_member > object_2.data_member)
        {
            return object_1;
        }
        else
        {
            return object_2;
        }
    }
    void member_function_2()
    {
        cout<< data_member <<endl;
    }
};

int main()
{
    class_name object_one, object_two, object_three;

    object_three = object_one.member_function_1(object_one, object_two);
    object_three.member_function_2();

    return 0;
}
