#include <iostream>
using namespace std;
class Complex
{
private:
	int real, imag;

public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}
	void print() { cout << real << " + i" << imag << endl; }
	// The global operator function is made friend of this class so that it can access private members
	friend Complex operator+(Complex const &c1, Complex const &c2);
};
Complex operator+(Complex const &c1, Complex const &c2)
{
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c2; // An example call to "operator+"
	c3.print();			  //? Output: 12 + i9
	return 0;
}
