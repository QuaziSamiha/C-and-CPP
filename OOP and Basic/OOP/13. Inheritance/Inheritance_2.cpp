// Single inheritance and protected visibility mode
//? (1:49am,13 May,2020 & 11:29am,17 August,2020)
//? February, March, August, September, 2024
//? 17 June, 2025
#include <iostream>

using namespace std;

class superclass
{
    int m1_superclass; // private data member of super class and can't inherit
protected:
    int m2_superclass; // it will be protected in derived class since visibility-mode protected
public:
    int m3_superclass;              // public data member & it will be protected in derived class since visibility mode protected
    void function_superclass(void); // it will be protected in derived class since visibility mode protected
};

class subclass : protected superclass // here visibility mode is protected
{
    int m1_subclass; // private data member of subclass
public:
    void function_subclass(void);
};

void superclass ::function_superclass(void) // defining member function of superclass
{
    m1_superclass = 2020; // accessing private data member of superclass
    // accessing data member of superclass by member function of superclass
    cout << endl
         << "superclass" << endl;
    cout << "m1_superclass : " << m1_superclass << endl;
    cout << "m2_superclass : " << m2_superclass << endl;
    cout << "m3_superclass : " << m3_superclass << endl;
}

void subclass ::function_subclass(void) // defining member function of subclass
{
    m1_subclass = 2015; // accessing private data member of subclass

    m2_superclass = 2020; // accessing protected data member of superclass
    m3_superclass = 2018; // accessing public data member of superclass

    cout << "subclass" << endl;
    cout << "m1_subclass : " << m1_subclass << endl;
    function_superclass(); // calling member function of superclass
}

int main()
{
    subclass object; // creating object of subclass

    object.function_subclass(); // calling member function of subclass through object of subclass
    return 0;
}
