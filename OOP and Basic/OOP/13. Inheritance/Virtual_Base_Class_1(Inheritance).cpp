#include <iostream>

using namespace std;

// Virtual Base Class

/**
 A virtual base class** is a concept in C++ used to avoid duplication when using
 multiple inheritance.

🧠 Problem It Solves:
In multiple inheritance, if two base classes inherit from the same parent, and a derived class
inherits both — the parent class gets duplicated.

🔁 This is called the **Diamond Problem**.

🛠️ Solution:
To fix this, we make the common parent a virtual base class.
This ensures only one copy of the parent is inherited.

*/
class super_class
{
protected:
    char data_member_super_class[10] = "Samiha";
};

class sub_class_1 : virtual public super_class // using virtual base class to avoid ambiguity
{
protected:
    int data_member_sub_class_1 = 15;

public:
    void member_function_sub_class_1(void)
    {
        cout << "data_member_sub_class_1 : " << data_member_sub_class_1 << endl;
    }
};

class sub_class_2 : virtual public super_class // using virtual base class to avoid ambiguity
{
protected:
    int data_member_sub_class_2 = 10;

public:
    void member_function_sub_class_2(void)
    {
        cout << "data_member_sub_class_2 : " << data_member_sub_class_2 << endl;
    }
};

class sub_class_3 : public sub_class_1, public sub_class_2
{
protected:
    int data_member_sub_class_3;

public:
    void member_function_sub_class_3(void)
    {
        cout << "String : " << data_member_super_class << endl; //! this line will show an error ( ambiguous) if we don't use virtual base class
        cout << "data_member_sub_class_3 : " << data_member_sub_class_1 + data_member_sub_class_2 << endl;
    }
};

int main()
{
    sub_class_3 object_one;

    object_one.member_function_sub_class_1();
    object_one.member_function_sub_class_2();
    object_one.member_function_sub_class_3();

    return 0;
}
