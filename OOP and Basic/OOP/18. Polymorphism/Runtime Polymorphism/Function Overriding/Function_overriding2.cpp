// C++ program for function overriding with data members
#include <bits/stdc++.h>
using namespace std;

// base class declaration.
class Animal
{
public:
    string color = "Black";
};

// inheriting Animal class.
class Dog : public Animal
{
public:
    string color = "Grey";
};

// Driver code
int main(void)
{
    Animal d = Dog(); // accessing the field by reference
                      // variable which refers to derived
    cout << d.color;
}

/*
Runtime Polymorphism with Data Members
Runtime Polymorphism cannot be achieved by data members in C++. Let’s see an example 
where we are accessing the field by reference variable of parent class which refers to the 
instance of the derived class.
We can see that the parent class reference will always refer to the data member of the parent class.
*/