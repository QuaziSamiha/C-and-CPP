// static member function
//? (12:57am,7 May,2020 & 6:57pm,16August,2020)
//? (February & March & September, 2024)
//? (17 June,2025)
#include <iostream>

using namespace std;

// static member function can be defined both inside or outside of the class
// we can use only static data member or static member function inside a static member function

class class_name
{
    static int data_member; // static private data member
public:
    static void static_member_function(void); // declaring static member function
};

int class_name::data_member; // defining static data member

void class_name::static_member_function() // defining static member function outside class
{
    cout << "static data member : " << data_member << endl;
}

int main()
{
    class_name::static_member_function(); // calling static member function and it will show that static data member = 0
    // we use class name and scope-resolution operator for calling static member function instead of object and dot operator
    return 0;
}

/**
 * output:
 * static data member : 0
 */

/*
Static functions in a class: Just like the static data members or static variables inside the class, static member functions also
does not depend on object of class. We are allowed to invoke a static member function using the object and the (.) dot operator but it
is recommended to invoke the static members using the class name and the scope resolution operator.
Static member functions are allowed to access only the static data members or other static member functions, they can not
access the non-static data members or member functions of the class.
*/
