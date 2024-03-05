#include<iostream>

using namespace std;

// Pointers to Data-Member

class class_name
{
public :
    int data_member;
};

int main()
{
    int class_name::*pointer_name_1; // declaring
    pointer_name_1 = &class_name::data_member; // assigning

    int class_name::*pointer_name_2 = &class_name::data_member; // declaring and assigning

    class_name object;

    object.data_member = 24; // direct access
    cout<<"data_member : "<< object.data_member<<endl;

    object.*pointer_name_1 = 12; // access through pointer to member
    cout<<"data_member : "<< object.data_member<<endl;

    object.*pointer_name_2 = 32; // access through pointer to member
    cout<<"data_member : "<< object.data_member<<endl;

    return 0;
}
