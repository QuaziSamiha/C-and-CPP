#include <iostream> // adding two integers (8:41pm,15 August,2020)

using namespace std;

class class_name
{
    int m;

public:
    void function_1(void);
    void function_2(void);
    void function_3(class_name &, class_name &);
};

void class_name::function_1(void)
{
    cout << "Enter an integer : ";
    cin >> m;
}

void class_name::function_2(void)
{
    cout << m << endl;
}

void class_name::function_3(class_name &ob1, class_name &ob2)
{
    m = ob1.m + ob2.m;
}

int main()
{
    class_name obj1, obj2, obj3;

    // calling functions for taking input
    obj1.function_1();
    obj2.function_1();
    obj3.function_3(obj1, obj2); // calling function for addition and passing object

    // calling function for displaying output
    cout << "value of object_1 : ";
    obj1.function_2();
    cout << "value of object_2 : ";
    obj2.function_2();
    cout << "sum : ";
    obj3.function_2(); // calling function for displaying addition
}
