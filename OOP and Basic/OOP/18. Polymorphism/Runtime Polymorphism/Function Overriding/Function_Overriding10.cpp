#include <iostream>
// 24.03.24
using namespace std;
// pure virtual function --> virtual function with no definition
// a virtual function is redefined in derived class
// A class that contains a pure virtual function is called the abstract class
// pure virtual function has to define in derived class -- its compulsory
// you cannot create object of abstract class -- so it is used as base class for other class
class class_1
{
public:
    virtual void member_function() = 0; // pure virtual function
    // do nothing function
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
