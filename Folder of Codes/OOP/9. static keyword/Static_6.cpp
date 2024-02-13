//  program to illustrate class objects as static
#include<iostream>

using namespace std;

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
        static class_name object; // declaring object of class
    }
    cout << "End of main\n";
}

/*
Output:

Inside Constructor
End of main
Inside Destructor

You can clearly see the change in output. Now the destructor is invoked after the end of main. This happened because the
scope of static object is through out the life time of program.
*/
