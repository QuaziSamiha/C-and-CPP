#include<iostream>

using namespace std;

// Pointers to Member Functions

class class_name
{
    int member_function(int parameter)
    {
        return parameter;
    }
public :
    int (class_name::*pointer_name) (int) = &class_name :: member_function; // pointers to member functions
    // we are passing the address of member_function to the pointer_name
};

int main()
{
    class_name object;

    cout<< (object.*object.pointer_name) (14) <<endl;

    return 0;
}
