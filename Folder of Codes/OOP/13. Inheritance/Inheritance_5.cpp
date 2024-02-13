// Multiple Inheritance : more than one superclass and one subclass  (2:34am,13 May,2020 & 11:46am,17 August,2020)
#include<iostream>

using namespace std;

class superclass_1
{
protected :
    int m_superclass_1; // it will be protected in derived-class since visibility mode is public
public :
    void function_superclass_1(void); // it will be public in derived-class since visibility mode is public
};

class superclass_2
{
protected :
    int m_superclass_2; // it will be protected in derived-class since visibility mode is public
public :
    void function_superclass_2(void); // it will be public in derived-class since visibility mode is public
};

class subclass : public superclass_1, public superclass_2
{
    int m_subclass;
public :
    void function_subclass(void);
};

void superclass_1 :: function_superclass_1(void) // defining member function of superclass-1
{
    cout<<"Enter an integer for superclass_1 : ";
    cin>>m_superclass_1; // getting input of protected data member of super-class-1
}

void superclass_2 :: function_superclass_2(void) // defining member function of super-class-2
{
    cout<<"Enter an integer for superclass_2 : ";
    cin>>m_superclass_2; // getting input of protected data member of super-class-2
}

void  subclass :: function_subclass(void) // defining member function of sub-class
{
    m_subclass = 2020;
    cout << "m_subclass     : " << m_subclass << endl;
    // accessing superclass protected data member from subclass member function
    cout << "m_superclass_1 : " << m_superclass_1 << endl;
    cout << "m_superclass_2 : " << m_superclass_2 << endl;
}

int main()
{
    subclass object;

    // calling member function of two super-classes through object of subclass
    object.function_superclass_1();
    object.function_superclass_2();

    object.function_subclass(); // calling member function of subclass through object of subclass
    return 0;
}
