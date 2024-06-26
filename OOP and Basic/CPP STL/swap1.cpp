// C++ program for illustration of swap() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	cout << "Value of a before: " << a << endl;
	cout << "Value of b before: " << b << endl;

	// swap values of the variables
	swap(a, b);
	cout << "Value of a now: " << a << endl;
	cout << "Value of b now: " << b << endl;
	return 0;
}

/*
output: 
Value of a before: 10
Value of b before: 20
Value of a now: 20
Value of b now: 10
*/

/*
The function std::swap() is a built-in function in the C++ Standard Template Library (STL) which 
swaps the value of two variables.

Parameters:
The function accepts two mandatory parameters a and b which are to be swapped. 
The parameters can be of any data type.

Return Value:
The function does not return anything, it swaps the values of the two variables. 
Programs below illustrate the swap() function:

Time Complexity: O(1)
Space Complexity: O(1)
*/