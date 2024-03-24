#include<iostream>  // (1:34am,23 May,2020 & 12:13pm,19 August,2020)

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
//  super_class  object; it will show an error

    superclass *pointer_1, *pointer_2;

    subclass_1 ob1;
    subclass_2 ob2;

    pointer_1 = &ob1;
    pointer_2 = &ob2;

    pointer_1 -> member_function();
    pointer_2 -> member_function();
    return 0;
}

// output:
// Sub-Class 1 
// Sub-Class 2 
