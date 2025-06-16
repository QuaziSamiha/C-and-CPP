// introduction to friend function
//? (1:29am,2 May,2020 & 9:49pm,15 August,2020)
//? (February & March & September, 2024)
//? (16 June, 2025)
// declaring different prototypes of friend function
// calling member function of the class in friend function
#include <iostream>

using namespace std;

class class_name
{
    int m1, m2;                   // private data members of this class
    friend void function_1(void); // declaring friend function which is non-member function for this class
public:
    void member_function(void); // public member function of this class
    // declaring different prototypes of friend function which is non-member function for this class
    friend int function_2(void);
    friend void function_3(class_name object);
    friend int function_4(class_name object_1, class_name object_2);
};

inline void class_name::member_function(void) // Defining member function
{
    cout << "Enter two integers : ";
    cin >> m1 >> m2;
}

int function_2(void) // Defining Friend function
{
    class_name object;        // declaring object of class in friend function
    object.member_function(); // calling member function of the class in friend function
    // declaring local variable of friend function & accessing private data members of the class by non-member function through object
    int v = object.m1 + object.m2; // v = local variable
    return v;
}

int main()
{
    int variable;            // declaring local variable of main function
    variable = function_2(); // calling friend function without object
    cout << "Sum of two integers : " << variable << endl;
    return 0;
}

/*
any function outside of a class cannot access private & protected member of the class.Only member function of that class
can access the private & protected data members.
A friend function of a class is not a member of that class but it can access private & protected members of the class.
Friend function is not private, protected or public as it is not a member of a class.
We don't need object to call friend function as it is not a member of a class.
*/
