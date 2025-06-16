#include <iostream> // (1:34pm,15 August,2020)

// protected and public access specifier

using namespace std;

class access_specifier
{
protected:
    int m1;
    void protected_function_1(void);
    void protected_function_2(void) // defining protected member function inside class
    {
        cout << "defining protected member function inside class" << endl;
    }

public:
    int m2;
    void public_function(int p);
};

void access_specifier::protected_function_1(void)
{
    cout << "defining protected member function outside class" << endl;
}

void access_specifier::public_function(int p)
{
    m1 = p; // initializing protected data member in public member function
    cout << "m1 : " << m1 << endl;
    //  calling protected data member in public member function
    protected_function_1(); // nesting of member function
    protected_function_2(); // nesting of member function
}
int main()
{
    access_specifier object;

    //  object.m1 = 12; will show an error
    //  object.protected_function_1(); will show an error
    object.public_function(56); // calling public member function through object and passing value
    object.m2 = 789;            // initializing public data member through object
    cout << "m2 : " << object.m2 << endl;
    return 0;
}
