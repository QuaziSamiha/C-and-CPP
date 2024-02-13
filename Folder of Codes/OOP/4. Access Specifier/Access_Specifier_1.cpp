#include<iostream> // (12:53am,12 May,2020 & 12:34pm,15 August,2020)

// private and public access specifier

using namespace std;

class access_specifier
{
private:
    int m1;
    void private_function_1(void);
    void private_function_2(void)
    {
        cout<<"private member function defining inside the class"<<endl;
    }

public:
    int m2;
    void public_function(void);
};

void access_specifier::private_function_1(void)
{
    cout<<"private member function defining outside the class"<<endl;
}

void access_specifier::public_function(void)
{
//  calling private data member and member functions in public member function
    m1 = 1202;
    cout << "m1 : " << m1 << endl;
    private_function_1(); // nesting of member function
    private_function_2();  // nesting of member function
}

int main()
{
    access_specifier object;

 // object.private_function_1(); not possible as a private member function
 // object.m1 = 23; not possible
    object.m2 = 18; // calling public data member through object and dot operator
    cout << "m2 : " << object.m2 << endl;
    object.public_function(); // calling public member function through object and dot operator
    return 0;
}
