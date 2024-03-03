// Ambiguity Resolution in Inheritance   (2:12am,14 May,2020 & 7:55am,19 August,2020)
// same function name in two or more classes
#include<iostream>

using namespace std;

class class_1
{
protected :
    int m_class_1 = 13;
public :
    void member_function(void)
    {
        cout<<"data_member_class_1 : "<<m_class_1<<endl;
    }
};

class class_2
{
protected :
    int m_class_2 = 23;
public :
    void member_function(void)
    {
        cout<<"data_member_class_2 : "<<m_class_2<<endl;
    }
};

class class_3 : public class_1, public class_2
{
    int m_class_3;
public :
    void member_function_class_3(void)
    {
        m_class_3 = m_class_1 + m_class_2;
        cout<<"data_member_class_3 : "<<m_class_3<<endl;
    }
};

int main()
{
    class_3 object;

    // object.member_function(); this line will show an error called ambiguous since class_1 & class_2 have same named member function

    object.class_1::member_function(); // calling member function  of class class_1
    object.class_2::member_function(); // calling member function  of class class_2

    object.member_function_class_3();
    return 0;
}
