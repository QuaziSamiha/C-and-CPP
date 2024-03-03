// 01.03.24
#include<iostream> // (1:40am,23 May,2020 & 11:46am,19 August,2020)

using namespace std;

// Why we use virtual function

class superclass
{
public :
    void member_function()
    {
        cout<<"Base Class "<< endl;
    }
};

class subclass_1 : public superclass
{
public :
    void member_function()
    {
        cout<<"Derived Class 1 "<< endl;
    }
};

class subclass_2 : public superclass
{
public :
    void member_function()
    {
        cout<<"Derived Class 2 "<< endl;
    }
};

int main()
{
    superclass  *pointer; // we can create only superclass pointer

    subclass_1  ob1;
    subclass_2  ob2;

    pointer = &ob1;
    pointer -> member_function();

    pointer = &ob2;
    pointer -> member_function();
    return 0;
}
