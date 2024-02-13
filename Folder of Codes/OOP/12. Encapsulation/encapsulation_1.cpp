#include<iostream>
#include<string>

using namespace std;

// encapsulation is a process of combining variables and functions in a single unit(class)

class class_name
{
public :
    int m1;
    string m2;
    void function_1(void)
    {
        cout << "m2 : " << m2 << endl;
        cout << "m1 : " << m1 << endl;
    }
};

int main()
{
    class_name ob;

    ob.m1 = 2020;
    ob.m2 = "17 August";
    ob.function_1();
}
