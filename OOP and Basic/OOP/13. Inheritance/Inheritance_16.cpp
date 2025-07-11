// Initialization List in Constructor
//? (9:45pm,16 May,2020 & 9:38am,19 August,2020)
////? February, March, August, September, 2024
//? 17 June, 2025
#include <iostream>

using namespace std;

class class_1
{
protected:
    int data_member_class_1;

public:
    class_1(int parameter_one)
    {
        data_member_class_1 = parameter_one;
        cout << "Constructor class_1 Initialized" << endl;
    }
    void member_function_class_1(void)
    {
        cout << endl;
        cout << "data_member_class_1 : " << data_member_class_1 << endl;
    }
};

class class_2
{
protected:
    int data_member_1_class_2, data_member_2_class_2;

public:
    class_2(int parameter_1, int parameter_2) : data_member_1_class_2(parameter_1 * 2), data_member_2_class_2(parameter_2) // initialization list in constructor
    {
        cout << "Constructor class_2 Initialized" << endl;
    }
    void member_function_class_2(void)
    {
        cout << "data_member_1_class_2 : " << data_member_1_class_2 << endl;
        cout << "data_member_2_class_2 : " << data_member_2_class_2 << endl;
    }
};

class class_3 : public class_1, public class_2
{
    int data_member_1_class_3, data_member_2_class_3;

public:
    class_3(int p1, int p2, int p3, int p4, int p5) : class_1(p1), class_2(p2, p3), data_member_1_class_3(p4)
    {
        data_member_2_class_3 = p5;
        cout << "Constructor class_3 Initialized" << endl;
    }
    void member_function_class_3(void)
    {
        cout << "data_member_1_class_3 : " << data_member_1_class_3 << endl;
        cout << "data_member_2_class_3 : " << data_member_2_class_3 << endl;
    }
};

int main()
{
    class_3 object(10, 20, 30, 40, 50);

    object.member_function_class_1();
    object.member_function_class_2();
    object.member_function_class_3();
}

/**
 * output:
Constructor class_1 Initialized
Constructor class_2 Initialized
Constructor class_3 Initialized

data_member_class_1 : 10
data_member_1_class_2 : 40
data_member_2_class_2 : 30
data_member_1_class_3 : 40
data_member_2_class_3 : 50


 */
