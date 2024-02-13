// Multiple Inheritance's Constructor in Derived Class               (3:51pm,16 May,2020 & 8:35am,19 August,2020)
#include<iostream>

using namespace std;

class superclass_1
{
private :
    int m1_superclass_1; // it cannot be inherited
protected :
    int m2_superclass_1; // it can be inherited
public :
    superclass_1(int p_one, int p_two) // parameterized constructor
    {
        m1_superclass_1 = p_one;
        m2_superclass_1 = p_two;
        cout<<"Constructor Super Class 1"<<endl;
    }
    void function_superclass_1(void) // member function
    {
        cout<<endl;
        cout<<"data_member_1_super_class_1 : "<<m1_superclass_1<<endl;
        cout<<"data_member_2_super_class_1 : "<<m2_superclass_1<<endl;
    }
};

class superclass_2
{
private :
    int m1_superclass_2; // it cannot be inherited
protected :
    int m2_superclass_2; // it can be inherited
public :
    superclass_2(int p_one, int p_two) // parameterized constructor
    {
        m1_superclass_2 = p_one;
        m2_superclass_2 = p_two;
        cout<<"Constructor Super Class 2"<<endl;
    }
    void function_superclass_2(void) // member function
    {
        cout<<endl;
        cout<<"data_member_1_super_class_2 : "<<m1_superclass_2<<endl;
        cout<<"data_member_2_super_class_2 : "<<m2_superclass_2<<endl;
    }
};

class subclass : public superclass_2, public superclass_1 // constructor will initialized in this sequence
{
    int m1_subclass, m2_subclass;
public :
    subclass(int p1, int p2, int p3, int p4, int p5, int p6): superclass_1(p1,p2), superclass_2(p3,p4)
    {
       m1_subclass = p5;
       m2_subclass = p6;
       cout<<"Constructor Sub Class "<<endl;
    }
    void function_subclass(void)
    {
        cout<<endl;
        cout<<"data_member_1_sub_class : "<<m1_subclass<<endl;
        cout<<"data_member_2_sub_class : "<<m2_subclass<<endl;
    }
};

int main()
{
    subclass object(10,12,20,22,30,32);

    object.function_superclass_1();
    object.function_superclass_2();

    object.function_subclass();
    return 0;
}
