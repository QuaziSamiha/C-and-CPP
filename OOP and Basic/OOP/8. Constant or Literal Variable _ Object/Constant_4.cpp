#include<iostream> // (3:02am,6 May,2020 & 1:35pm,16 August,2020)
// #include<conio.h>

using namespace std;

class class_name
{
public :
    void member_function_1(void) const  // declaring & defining constant member function inside the class
    {
        cout<<" constant_1 "<<endl;
    }
    void member_function_2(void) const;  // declaring constant member function of class
};

void class_name::member_function_2(void) const  // defining constant member function outside the class
{
    cout<<" constant_2 "<<endl;
}

int main()
{
    const class_name object; // creating constant object of the class
    // constant object can access only constant member function
    // we create constant object whenever we don't want to modify the object later

    object.member_function_1(); // calling member function through object
    object.member_function_2(); // calling member function through object
}

