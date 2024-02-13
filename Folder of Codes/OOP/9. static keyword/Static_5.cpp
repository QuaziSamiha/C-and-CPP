// program to illustrate when not using static keyword
// Consider the below program where the object is non-static.
#include<iostream>

using namespace std;

// Class objects as static: Just like variables, objects also when declared as static have a scope till the lifetime of program.

class class_name
{
public:
    class_name()
    {
        cout << "Inside Constructor\n";
    }
    ~class_name()
    {
        cout << "Inside Destructor\n";
    }
};

int main()
{
    int v = 0;

    if (v == 0)
    {
        class_name object; // declaring object of class
    }
    cout << "End of main\n";
}
/*
Output:

Inside Constructor
Inside Destructor
End of main

In the above program the object is declared inside the if block as non-static. So, the scope of variable is inside the
if block only. So when the object is created the constructor is invoked and soon as the control of if block gets over the
destructor is invoked as the scope of object is inside the if block only where it is declared.
Let us now see the change in output if we declare the object as static in Static_6.cpp file.
*/


