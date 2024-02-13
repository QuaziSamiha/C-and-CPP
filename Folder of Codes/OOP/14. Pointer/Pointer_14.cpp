#include<iostream>

using namespace std;

// Pointer in Derived Class with Same Function Name

class super_class
{
    int data_member_1;
public :
    int data_member_2 = 50;
    void member_function_1_super_class(int parameter)
    {
        data_member_1 = parameter;
    }
    void member_function_2()
    {
        cout<<"Super Class "<<endl;
        cout<<"data_member_1 : "<< data_member_1 <<endl;
        cout<<"data_member_2 : "<< data_member_2 <<endl;
    }
};

class sub_class : public super_class
{
    int data_member;
public :
    void member_function_1_sub_class(int parameter)
    {
        data_member = parameter;
    }
    void member_function_2()
    {
        cout<<"\nSub Class : "<< endl;
        cout<<"data_member : "<< data_member << endl;
    }
};

int main()
{
    super_class  object_one;
    super_class  *pointer_one; // creating pointer object of super-class

    pointer_one = &object_one; // assigning address of object of super-class

    pointer_one->member_function_1_super_class(15); // accessing super-class's member=function's through object
    pointer_one->member_function_2(); // accessing super-class's member=function's through object

    sub_class  object_two;
    sub_class  *pointer_two; // creating pointer object of sub-class

    pointer_two = &object_two; // assigning address of object of sub-class

    pointer_two->member_function_1_sub_class(110);
    pointer_two->member_function_2();

    return 0;
}
