// Multilevel Inheritance  (1:24am,14 May,2020 & 12:05pm,17 August,2020)
#include <iostream>

using namespace std;

class superclass
{
protected:
    int m_superclass; // it will be protected both intermediate-sub-class & sub-class
public:
    void function_superclass(void); // it will be public both intermediate-sub-class & sub-class
};

class intermediate_subclass : public superclass
{
protected:
    int m_intermediate_subclass; // it will be protected in sub-class
public:
    void function_intermediate_subclass(void); // it will be public both intermediate-sub-class & sub-class
};

class subclass : public intermediate_subclass
{
    int m_subclass; // private data member
public:
    void function_subclass(void);
};

void superclass ::function_superclass(void) // defining member function of super-class
{
    cout << "Enter an integer for superclass : ";
    cin >> m_superclass;
}

void intermediate_subclass ::function_intermediate_subclass(void) // defining member function of intermediate-sub-class
{
    cout << "Enter an integer for intermediate_subclass : ";
    cin >> m_intermediate_subclass;
}

void subclass ::function_subclass(void) // defining member function of sub-class
{
    m_subclass = 12;
    cout << "m_subclass : " << m_subclass << endl;

    cout << "m_superclass : " << m_superclass << endl;
    cout << "m_intermediate_subclass : " << m_intermediate_subclass << endl;
}

int main()
{
    subclass object;

    object.function_superclass();            // calling member function of super-class through object of sub-class
    object.function_intermediate_subclass(); // calling member function of intermediate-sub-class through object of sub-class

    object.function_subclass(); // calling member function of sub-class through object of sub-class
    return 0;
}
