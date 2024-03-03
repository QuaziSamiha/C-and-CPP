#include<iostream>  // (11:39am,19 August,2020)

using namespace std;

class class_1
{
public :
    void member_function(void) // overridden function
    {
        cout << "class_1" << endl;
    }
};

class class_2 : public class_1
{
public :
    void member_function(void) // override function
    {
        cout << "class_2" << endl;
    }
};

class class_3 : public class_1
{
public :
    void member_function(void) // override function
    {
        cout << "class_3" << endl;
    }
};

int main()
{
    class_1 ob1;
    ob1.member_function();

    class_2 ob2;
    ob2.member_function();

    class_3 ob3;
    ob3.member_function();
    return 0;
}
