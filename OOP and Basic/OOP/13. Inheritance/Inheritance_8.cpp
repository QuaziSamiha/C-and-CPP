// Virtual Base Class
//? (2:04am,16 May,2020 & 7:57am,19 August,2020)
//? February, March, August, September, 2024
//? 17 June, 2025
#include <iostream>
#include <string>

using namespace std;

class superclass
{
protected:
    string m_superclass = "C++ Programming";
};

class subclass_1 : virtual public superclass // using virtual base class to avoid ambiguity
{
protected:
    int m_subclass_1 = 15;

public:
    void function_subclass_1(void)
    {
        cout << "data_member_subclass_1 : " << m_subclass_1 << endl;
    }
};

class subclass_2 : virtual public superclass // using virtual base class to avoid ambiguity
{
protected:
    int m_subclass_2 = 10;

public:
    void function_subclass_2(void)
    {
        cout << "data_member_sub_class_2 : " << m_subclass_2 << endl;
    }
};

class subclass_3 : public subclass_1, public subclass_2
{
protected:
    int m_subclass_3;

public:
    void function_subclass_3(void)
    {
        cout << "String : " << m_superclass << endl; // this line will show an error ( ambiguous) if we don't use virtual base class
        cout << "data_member_subclass_3 : " << m_subclass_1 + m_subclass_2 << endl;
    }
};

int main()
{
    subclass_3 object;

    object.function_subclass_1();
    object.function_subclass_2();
    object.function_subclass_3();
    return 0;
}

/**
 * output:
data_member_subclass_1 : 15
data_member_sub_class_2 : 10
String : C++ Programming
data_member_subclass_3 : 25
*/
