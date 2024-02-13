// declaring and defining and initializing static data member  (7 May,2020 & 6:37pm,16August,2020)
#include<iostream>

using namespace std;

// static data member creates a memory location and its all object share this memory location

class class_name
{
    static int data_member; // private data member
public :
    void member_function(void); // member function
};

// static data member has to define outside of the class
int class_name::data_member = 12; // defining and initializing static data member

inline void class_name::member_function(void) // member function
{
    cout<<"static data_member : "<<data_member<<endl;
}

int main()
{
    class_name  object_1, object_2, object_3;

    object_1.member_function();
    object_2.member_function();
    object_3.member_function();

    cout<<endl;
    return 0;
}
