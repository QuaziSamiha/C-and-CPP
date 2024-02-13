#include<iostream>

using namespace std;

class class_name
{
    int variable; // private data member
public :
    void member_function_1(int variable) // when parameter name and data member name is same
    {
        this->variable = variable; // using this pointer explicitly
    }
    void member_function_2()
    {
        cout<<"variable : "<< variable << endl;
        cout<<"this->variable : "<< this->variable << endl;
        cout<<"(*this).variable : "<< (*this).variable <<endl;
    }
};

int main()
{
    class_name  object;

    object.member_function_1(24);
    object.member_function_2();

    return 0;
}
