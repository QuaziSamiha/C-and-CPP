// parameterized constructor  (10:58pm,9 May,2020 & 10:37pm,16 August,2020)
#include<iostream>

using namespace std;

/*
Uses of Parameterized constructor:
It is used to initialize the various data elements of different objects with different values when they are created.
It is used to overload constructors.
*/

class class_name
{
    int data_member_1, data_member_2;
public :
    class_name(int, int); // declaring parameterized constructor
};

class_name::class_name(int parameter_1, int parameter_2) // defining parameterized constructor
{
    data_member_1 = parameter_1;
    data_member_2 = parameter_2;
    cout<<" data_member_1 : "<<data_member_1<<endl;
    cout<<" data_member_2 : "<<data_member_2<<endl;
}

int main()
{
    cout<<"Explicitly Called : "<<endl;
    class_name object_1 = class_name(12,15); // calling constructor explicitly

    cout<<"Implicitly Called : "<<endl;
    class_name object_2(20,24); // calling constructor implicitly or shorthand method
    return 0;
}
