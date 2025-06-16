#include <iostream> // (11:42am,15 August,2020)

using namespace std;

/*
difference between structure and class :
A class is a user-defined blueprint or prototype from which objects are created. Basically, a class combines the fields and
methods(member function which defines actions) into a single unit.
A structure is a collection of variables of different data types under a single unit. It is almost similar to a class
because both are user-defined data types and both hold a bunch of different data types.
1. all members of structure are public but we can make public,private,protected members in class
2. structure is a collection of various data-type but it has no function
3. Class has limitless features.Structure has limited features.
4. Class is generally used in large programs.Structures are used in small programs.
5. A Class can inherit from another class.A Structure is not allowed to inherit from another structure or class.
6. Two variable of class can contain the reference of the same object and any operation on one variable can affect another variable.Each
variable in structure contains its own copy of data(except in ref and out parameter variable) and any operation on one variable can not
effect another variable.
*/

class class_name
{
    int m1;
    double m2 = 90.678;

public:
    void function_1(int p)
    {
        m1 = p;
        cout << "m1 : " << m1 << "\nm2 : " << m2 << endl;
    }
    int function_2();
};

int class_name::function_2()
{
    return m1 * m1;
}

int main()
{
    class_name object;

    object.function_1(5);
    cout << "m1*m1 : " << object.function_2() << endl;
}
