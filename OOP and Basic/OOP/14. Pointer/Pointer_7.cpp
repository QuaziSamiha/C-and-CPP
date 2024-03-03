#include<iostream>

using namespace std;

class class_name
{
    int data_member ;
    int data_member_1;
public :
    void member_function()
    {
        data_member = 14; // this pointer works here implicitly

        cout<<"data_member : "<< data_member<< endl;
        cout<<"this->data_member : "<< this->data_member << endl;
        cout<<"(*this).data_member : "<< (*this).data_member << endl;

        this->data_member_1 = 12;
        cout<<"data_member_1 : "<<data_member_1 <<endl;
    }

};

int main()
{
    class_name  object_one; // address of object_one is going to this pointer...so we can access data_member through this

    object_one.member_function();

    return 0;
}
