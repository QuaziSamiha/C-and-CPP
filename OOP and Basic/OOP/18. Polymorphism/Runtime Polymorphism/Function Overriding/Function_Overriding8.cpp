#include <iostream>
// 24.03.24
using namespace std;

class class_1
{
public:
    void member_function(void) // overridden function
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

// output: class_1

