// declaring and defining static data member  (7 May,2020 & 5:30pm,16August,2020)
#include <iostream>

using namespace std;

// static data member creates a memory location and its all object share this memory location

class class_name
{
    static int data_member; // private data member
public:
    void function_1(void); // declaring member function
    void function_2(void); // declaring member function
};

// static data member has to define outside of the class
int class_name::data_member; // defining static data member

void class_name::function_1() // defining member function
{
    cout << "Enter an integer : ";
    cin >> data_member;
}

void class_name::function_2(void) // defining member function
{
    cout << "\nstatic data_member : " << data_member;
}

int main()
{
    class_name object_1, object_2, object_3;

    cout << "static data member is initialized zero by default : ";
    object_1.function_2();
    object_2.function_2();
    object_3.function_2();

    cout << endl
         << endl;

    // calling member function to take input for initializing static data member through object
    object_1.function_1();
    object_2.function_1();
    object_3.function_1();
    cout << endl
         << "After initializing : ";
    object_1.function_2();
    object_2.function_2();
    object_3.function_2();

    cout << endl;
    return 0;
}

/*
Static variables in a class: As the variables declared as static are initialized only once as they are allocated space
in separate static storage so, the static variables in a class are shared by the objects. There can not be multiple copies of
same static variables for different objects. Also because of this reason static variables can not be initialized using constructors.
*/
