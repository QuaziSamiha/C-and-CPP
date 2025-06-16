// introduction to friend function
//? (1:29am,2 May,2020 & 9:49pm,15 August,2020)
//? (February & March & September, 2024)
//? (15 & 16 June, 2025)
// accessing and initializing private data member of the class through object in friend function
#include <iostream>

using namespace std;
/*
any function outside of a class cannot access private & protected member of the class.Only member function of that class
can access the private & protected data members.
A friend function of a class is not a member of a class but it can access private & protected members of that class.
Friend function is not private,protected or public as it is not a member of a class.
We don't need object to call friend function as it is not a member of a class.
*/
class class_name
{
    int m1, m2;                       // private data members of this class
    friend int friend_function(void); // declaring friend function which is non-member function for this class
};

int friend_function(void) // Defining Friend function
{
    class_name object; // declaring object of class in friend function
    // accessing and initializing private data member of the class through object in friend function
    object.m1 = 12;
    object.m2 = 13;
    return (object.m1 + object.m2);
}

int main()
{
    int variable;                 // declaring local variable of main function
    variable = friend_function(); // calling friend function without using object
    cout << "Sum of two integers : " << variable << endl;
    cout << "Sum of two integers : " << friend_function() << endl; // calling friend function
    return 0;
}
