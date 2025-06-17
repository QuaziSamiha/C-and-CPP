// Constructor in Derived Class with Multilevel Inheritance
//? (5:45pm,16 May,2020 & 9:12am,19 August,2020)
//? February, March, August, September, 2024
//? 17 June, 2025
#include <iostream>

using namespace std;

class class_1
{
protected:
    int m_class_1;

public:
    class_1(int parameter_one)
    {
        m_class_1 = parameter_one;
        cout << "Constructor class_1 Initialized" << endl;
    }
};

class class_2 : public class_1
{
protected:
    int m_class_2;

public:
    class_2(int parameter_1, int parameter_2) : class_1(parameter_1) // initialized constructor of class_1 by derived class class_2
    {
        m_class_2 = parameter_2;
        cout << "Constructor class_2 Initialized" << endl;
    }
};

class class_3 : public class_2
{
protected:
    int m_class_3;

public:
    class_3(int parameter_one, int parameter_two, int parameter_three) : class_2(parameter_one, parameter_two) // initialized constructor of class_2 by derived class class_3
    {
        m_class_3 = parameter_three;
        cout << "Constructor class_3 Initialized" << endl;
    }
    void member_function_class_3(void)
    {
        cout << endl;
        cout << "data_member_class_1 : " << m_class_1 << endl;
        cout << "data_member_class_2 : " << m_class_2 << endl;
        cout << "data_member_class_3 : " << m_class_3 << endl;
    }
};

int main()
{
    class_3 object(10, 11, 12);

    object.member_function_class_3();
    return 0;
}

/**
 * output:

Constructor class_1 Initialized
Constructor class_2 Initialized
Constructor class_3 Initialized

data_member_class_1 : 10
data_member_class_2 : 11
data_member_class_3 : 12


 */