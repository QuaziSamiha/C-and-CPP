//  Call Overridden Function Using Pointer
#include <iostream>
using namespace std;

class Parent {
public:
	void GeeksforGeeks()
	{
		cout << "Base Function" << endl;
	}
};

class Child : public Parent {
public:
	void GeeksforGeeks()
	{
		cout << "Derived Function" << endl;
	}
};

int main()
{
	Child Child_Derived;

	// pointer of Parent type that points to derived1
	Parent* ptr = &Child_Derived;

	// call function of Base class using ptr of base class
	ptr->GeeksforGeeks();

	return 0;
}

// output: Base Function
