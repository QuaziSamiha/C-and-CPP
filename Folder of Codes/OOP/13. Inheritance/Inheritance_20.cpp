// Destructor in Derived Class  (10:52pm,16 May,2020 & 9:57am,19 August,2020)
#include<iostream>

using namespace std;

class class_1
{
protected :
    int data_member_1_class_1, data_member_2_class_1;
public :
    class_1(int parameter_1, int parameter_2)
    {
        data_member_1_class_1 = parameter_1;
        data_member_2_class_1 = parameter_2;
        cout<<"Constructor class_1 "<<endl;
    }
    ~class_1()
    {
        cout<<"Destructor Class_1 "<<endl;
    }
};

class class_2
{
protected :
    int data_member_1_class_2, data_member_2_class_2;
public :
    class_2(int parameter_1, int parameter_2)
    {
        data_member_1_class_2 = parameter_1;
        data_member_2_class_2 = parameter_2;
        cout<<"Constructor class_2 "<<endl;
    }
    ~class_2()
    {
        cout<<"Destructor Class_2 "<<endl;
    }
};

class class_3 : public class_2,  public class_1
{
    int data_member_1_class_3, data_member_2_class_3;
public :
    class_3(int p1, int p2, int p3, int p4, int p5, int p6) : class_1(p1,p2), class_2(p3,p4)
    {
        data_member_1_class_3 = p5;
        data_member_2_class_3 = p6;
        cout<<"Constructor class_3 "<<endl;
    }
    ~class_3()
    {
        cout<<endl;
        cout<<"Destructor Class_3 "<<endl;
    }
    void member_function_class_3(void)
    {
        cout<<endl;
        cout<<"data_member_1_class_1 : "<< data_member_1_class_1<<endl;
        cout<<"data_member_2_class_1 : "<< data_member_2_class_1<<endl;
        cout<<"data_member_1_class_2 : "<< data_member_1_class_2<<endl;
        cout<<"data_member_2_class_2 : "<< data_member_2_class_2<<endl;
        cout<<"data_member_1_class_3 : "<< data_member_1_class_3<<endl;
        cout<<"data_member_2_class_3 : "<< data_member_2_class_3<<endl;
    }
};

int main()
{
    class_3 object(10,20,30,40,50,60);

    object.member_function_class_3();
    return 0;
}
