#include <iostream>
//? 24.03.24
//? 18 June, 2025
using namespace std;
// late binding --> occurring at run time
// a virtual function is redefined in derived class
/*
 when a virtual function is defined in base class, then the pointer of the base class is also created
 now on the basis of object assigned, the respective class function is called. so this is called runtime
 polymorphism.
*/
class class_1
{
public:
    virtual void member_function(void) // virtual function
    {
        cout << "class_1" << endl;
    }
};

class class_2 : public class_1
{
public:
    void member_function(void) // override function
    {
        cout << "class_2" << endl;
    }
};

int main()
{

    class_1 *ptr;
    class_2 ob2;

    ptr = &ob2;
    ptr->member_function();
    return 0;
}

// output: class_2
