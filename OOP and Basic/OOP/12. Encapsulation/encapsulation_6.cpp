// In C++, encapsulation can be implemented using classes and access modifiers.
#include <iostream>
using namespace std;

class Encapsulation
{
private:
    // Data hidden from outside world
    int x;

public:
    // Function to set value of variable x
    void set(int a) { x = a; }

    // Function to return value of variable x
    int get() { return x; }
};

// Driver code
int main()
{
    Encapsulation obj;
    obj.set(5);
    cout << obj.get();
    return 0;
}

/*
Explanation: In the above program, the variable x is made private. This variable can
be accessed and manipulated only using the functions get() and set() which are present inside
the class. Thus we can say that here, the variable x and the functions get() and set() are bound
together which is nothing but encapsulation.
*/

/*
Features of Encapsulation:
1. We can not access any function from the class directly. We need an object to access that function
that is using the member variables of that class.
2. The function which we are making inside the class must use only member variables, only then
it is called encapsulation.
3. If we don’t make a function inside the class which is using the member variable of the class then
we don’t call it encapsulation.
4. Encapsulation improves readability, maintainability, and security by grouping data and methods together.
5. It helps to control the modification of our data members.
*/