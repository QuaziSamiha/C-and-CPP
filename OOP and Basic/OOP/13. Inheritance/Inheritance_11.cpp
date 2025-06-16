// Constructor in Derived Class  (6:28pm,16 May,2020 & 8:20am,19 August,2020)
#include <iostream>

using namespace std;

class superclass
{
private:
    int m1_superclass; // it cannot be inherited
protected:
    int m2_superclass; // it can be inherited
public:
    superclass(int p1, int p2) // parameterized constructor
    {
        m1_superclass = p1;
        m2_superclass = p2;
        cout << "Constructor Super Class" << endl;
    }
    void function_superclass(void) // member function
    {
        cout << endl;
        cout << "data_member_1_superclass : " << m1_superclass << endl;
        cout << "data_member_2_superclass : " << m2_superclass << endl;
    }
};

class subclass : public superclass // constructor will initialized in this sequence
{
    int m1_subclass, m2_subclass;

public:
    subclass(int p1, int p2, int p3, int p4) : superclass(p1, p2) //  initialized super class's constructor
    {
        m1_subclass = p3;
        m2_subclass = p4;
        cout << "Constructor Sub Class " << endl;
    }
    void function_subclass(void)
    {
        cout << endl;
        cout << "data_member_1_sub_class : " << m1_subclass << endl;
        cout << "data_member_2_sub_class : " << m2_subclass << endl;
    }
};

int main()
{
    subclass object(10, 12, 20, 22);

    object.function_superclass();
    object.function_subclass();
    return 0;
}
