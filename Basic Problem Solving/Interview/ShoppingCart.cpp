#include <iostream>

using namespace std;

class Item
{
public:
    string name;
    int price;
    Item(string n, int p)
    {
        name = n;
        price = p;
    }
};

int main(
    Item obj1("Chips", 20);
    cout << obj1.name << endl;
    cout << obj2.price << endl;
)