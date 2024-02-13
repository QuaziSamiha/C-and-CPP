//Default constructor  (10:40,9 May,2020 and 10:31pm,16 august,2020)
#include<iostream>

using namespace std;

class class_name
{
    int data_member;
public :
    class_name() // declaring & defining default constructor
    {
        data_member = 114;
        cout<<"data_member : "<<data_member<<endl;
        cout<<"constructor"<<endl;
    }
};

int main()
{
    class_name object; // object is automatically initialized through the class constructor
    //object.class_name(); not necessary to call constructor...it is automatically called when object is created
    return 0;
}

/*
A constructor without any arguments or with default value for every argument, is said to be default constructor. What is the significance
of default constructor? Will the code be generated for every default constructor? Will there be any code inserted by the compiler
to the user implemented default constructor behind the scenes?
Note: Even if we do not define any constructor explicitly, the compiler will automatically provide a default constructor implicitly.
The compiler will implicitly declare default constructor if not provided by programmer, will define it when in need. Compiler
defined default constructor is required to do certain initialization of class internals. It will not touch the data members or plain
old data types (aggregates like an array, structures, etc…). However, the compiler generates code for default constructor based on the
situation.

Consider a class derived from another class with the default constructor, or a class containing another class object with
default constructor. The compiler needs to insert code to call the default constructors of base class/embedded object.
*/
