#include <iostream> // (10:41pm,9 May,2020 & 9:42pm,16 August,2020)
// 29 August, 2024
using namespace std;

/*
what is constructor
A constructor is a member function of a class which initializes objects of a class. In C++, Constructor is automatically
called when object(instance of class) create. It is special member function of the class.

A constructor is different from normal functions in following ways:
1.Constructor has same name as the class itself
2.Constructors do not have return type
3.A constructor is automatically called when an object is created.
4.If we do not specify a constructor, C++ compiler generates a default constructor for us (expects no parameters and has an empty body).
*/

class class_name
{
public:
    class_name() // declaring and defining constructor
    {
        cout << "constructor" << endl;
    }
    void member_function(void)
    {
        cout << "member_function" << endl;
    }
};

int main()
{
    class_name object; // object is automatically initialized through the class constructor
    // object.class_name(); not necessary to call constructor...it is automatically called when object is created

    object.member_function(); // calling member function
    return 0;
}
