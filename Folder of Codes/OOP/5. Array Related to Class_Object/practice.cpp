#include <iostream>

using namespace std;

class myClass
{
    int n;

public:
    void display();
};

void myClass::display()
{
    n = 12;
    cout << "n: " << n << endl;
}

int main()
{
    myClass obj[5];
    for (int i = 0; i < 5; i++)
    {
        obj[i].display();
    }
}