#include <iostream>

using namespace std;

class myClass
{
    int v1;
    int mul(int);
    void sum()
    {
        cout << "sum: " << v1 + v1 << endl;
    };

public:
    int v2;
    void display();
};

int myClass::mul(int p)
{
    return v1 * p;
}

void myClass::display()
{
    v1 = 12;
    sum();
    cout << "mul: " << mul(12) << endl;
}

int main()
{
    myClass obj;
    obj.v2 = 5;
    obj.display();
    return 0;
}