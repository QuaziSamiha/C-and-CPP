// 01.03.24
#include<iostream>  // (1:40am,23 May,2020 & 12:05pm,19 August,2020)

using namespace std;

// Pure Virtual Function

class superclass // Abstract Class : we can't create object of abstract class but we can create pointer
{
public :
    virtual void member_function() = 0; // pure virtual function
};

class subclass_1 : public superclass
{
public :
    void member_function()
    {
        cout<<"Sub-Class 1 " << endl;
    }
};

class subclass_2 : public superclass
{
public :
    void member_function()
    {
        cout<<"Sub-Class 2 " << endl;
    }
};

int main()
{
//  super_class object; it will show an error
    subclass_1 object_1;
    subclass_2 object_2;

    object_1.member_function();

    object_2.member_function();

    return 0;
}

/*
output:
Sub-Class 1 
Sub-Class 2 
*/