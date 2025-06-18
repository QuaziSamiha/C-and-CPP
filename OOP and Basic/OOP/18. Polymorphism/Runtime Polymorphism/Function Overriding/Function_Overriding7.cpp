#include <iostream>
// 24.03.24
//? 18 June, 2025
using namespace std;
// early binding
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

    class_2 ob2;
    ob2.member_function(); // Early binding

    ob2.class_1::member_function(); // early binding
    return 0;
}

/*
output:
class_2
class_1
*/
