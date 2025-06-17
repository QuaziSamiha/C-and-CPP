// Hierarchical Inheritance : one superclass and more than one subclass
//? (1:24am,14 May,2020 & 12:22pm,17 August,2020)
// ? February, March, August, September, 2024
// ? 17 June, 2025
#include <iostream>

using namespace std;

class superclass
{
protected:
    int m_superclass; // it will be protected in both sub-class
public:
    void function_superclass(void) // it will be public in both sub-class
    {
        cout << "Enter an integer for superclass : ";
        cin >> m_superclass;
    }
};

class subclass_1 : public superclass
{
public:
    void function_subclass_1(void) // declaring & defining member function of sub-class
    {
        cout << endl
             << "subclass_1" << endl;
        function_superclass(); // calling member function of super-class
        cout << "m_superclass : " << m_superclass << endl;
    }
};

class subclass_2 : public superclass
{
public:
    void function_subclass_2(void) // declaring & defining member function of sub-class
    {
        cout << endl
             << "subclass_2" << endl;
        function_superclass(); // calling member function of super-class
        cout << "m_superclass : " << m_superclass << endl;
    }
};

int main()
{
    subclass_1 object_1;
    subclass_2 object_2;

    object_1.function_subclass_1();
    object_2.function_subclass_2();

    return 0;
}
