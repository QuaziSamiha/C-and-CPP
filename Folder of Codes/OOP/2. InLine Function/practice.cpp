
#include <iostream>

using namespace std;

class myClass
{
    int v1, v2;

public:
    void input();
    void maxValue();
};

inline void myClass::input()
{
    cout << "Enter two numbers: ";
    cin >> v1 >> v2;
}

inline void myClass::maxValue()
{
    cout << "Max value: " << (v1 > v2? v1:v2) << endl;
}

int main()
{
    myClass obj;
    obj.input();
    obj.maxValue();
    return 0;
}