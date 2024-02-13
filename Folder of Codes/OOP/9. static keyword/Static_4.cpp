// static member function  //(12:57am,7 May,2020 & 7:10pm,16August,2020)
#include<iostream>
// #include<conio.h>

using namespace std;

// static member function can be defined both inside or outside of the class
// we can use only static data member or static member function inside a static member function

class class_name
{
    static int m1; // static private data member
    int m2; // private data member
public :
    void function_1(void); // declaring member function
    void function_2(void); // declaring member function
    static void  static_member_function() // declaring and defining static member function
    {
        cout<<"static data member : "<<m1<<endl;
    }
};

int class_name::m1; // defining static data member

void class_name::function_1(void) // defining  member function
{
    m1++;
    m2 = m1;
}

void class_name::function_2(void) // defining member function
{
    cout<<"non-static data member : "<<m2<<endl;
}

int main()
{
    class_name  ob1, ob2; // creating objects of the class

    class_name::static_member_function(); // calling static member function and it will show that static data member = 0
    //we use class name and scope-resolution operator for calling static member function instead of object and dot operator

    ob1.function_1(); // m1 = 1
    ob2.function_1(); // m1 = 2
    class_name::static_member_function(); // it will show that static data member = 2

    class_name ob3;
    ob3.function_1(); // m1 = 3
    class_name::static_member_function(); // it will show that static data member = 3

    cout<<endl;
    ob1.function_2();
    ob2.function_2();
    ob3.function_2();
    return 0;
}
