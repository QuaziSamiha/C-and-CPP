#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a = "Geeks";
	string b = "function";
	cout << "Value of a before: " << a << endl;
	cout << "Value of b before: " << b << endl;
	swap(a, b);
	cout << "Value of a now: " << a << endl;
	cout << "Value of b now: " << b << endl;
	return 0;
}


/*
output:
Value of a before: Geeks
Value of b before: function
Value of a now: function
Value of b now: Geeks
*/