// calling friend function in main function and passing object            (1:21am,2 May,2020 & 9:50pm,15 August,2020)
#include<iostream>

using namespace std;

class class_name
{
    int m1, m2; //private data members of this class
public:
    void member_function(void); // public member function of this class
    friend int friend_function(class_name object);  // declaring friend function which is non-member function for this class
};

inline void class_name::member_function(void) // Defining member function
{
    cout<<"Enter two integers : ";
    cin>>m1>>m2;
}

int friend_function(class_name object) // Defining Friend function
{
    int v = object.m1 + object.m2; //accessing private data members of the class in friend function through object,
    return v; // v = local variable of friend function
}

int main()
{
    class_name object; // creating object of the class
    object.member_function(); // calling member function through object

    int v = friend_function(object); // calling friend function without object and passing object, v = local variable of main function
    cout<<"Sum of two integers : "<<v<<endl;
    return 0;
}

/*
any function outside of a class cannot access private & protected member of the class.Only member function of that class
can access the private & protected data members.
A friend function of a class is not a member of a class but it can access private & protected members of that class.
Friend function is not private,protected or public as it is not a member of a class.
We don't need object to call friend function as it is not a member of a class.
*/

