#include <iostream> // (11:17am,15 August,2020)

// declaring,defining,initializing class,object,data-member and member-function

using namespace std;

class class_name
{
    // by default private
    int data_member_1 = 90; // declaring and initializing data member
    double data_member_2;   // declaring data member
public:
    void member_function_1();            // declaring member function
    int member_function_2(int parameter) // parameterized member function declaring and defining
    {
        return (parameter * parameter);
    }
} object_2; // declaring object

void class_name::member_function_1() // defining member function
{
    data_member_2 = 23.78; // initializing data member
    cout << "integers : " << data_member_1 << endl;
    cout << "double   : " << data_member_2 << endl;
}
int main()
{
    class_name object_name, object_1; // declaring object
    class class_name object_3;        // declaring object

    object_name.member_function_1(); // calling member function through object and dot operator
    cout << "square of 5 : " << object_1.member_function_2(5) << endl;
    cout << "square of 7 : " << object_2.member_function_2(7) << endl;
    cout << "square of 9 : " << object_3.member_function_2(9) << endl;

    return 0;
}
