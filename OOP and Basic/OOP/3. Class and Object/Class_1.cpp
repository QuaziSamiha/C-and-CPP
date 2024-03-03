#include<iostream>  // (1:25pm,26 April,2020 & 10:15am,15 August,2020)

// declaring,defining,initializing class,object,data-member and member-function

using namespace std;

class class_name
{
    // by default private
    int data_member_1 = 90;  // declaring and initializing data member
    double data_member_2; // declaring data member
public :
    void member_function_1(); // declaring member function
    int member_function_2(int parameter) // declaring parameterized member function and defining inside the class
    {
        return (parameter*parameter); // it will be treated as in-line function by compiler
    }
};

// defining member function outside the class : it has to be after class definition and before main function
void class_name::member_function_1() // defining member function outside the class using scope resolution operator
{
    data_member_2 = 23.78; // initializing data member
    cout << "integer : " << data_member_1 <<endl;
    cout << "double   : " << data_member_2 <<endl;
}

int main()
{
    class_name object_name; // declaring object

    object_name.member_function_1(); // calling member function through object and dot operator
    cout<< "square of 5 : " << object_name.member_function_2(5) << endl;

    return 0;
}
