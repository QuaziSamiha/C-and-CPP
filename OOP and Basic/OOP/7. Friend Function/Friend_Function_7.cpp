// Operate on objects of two different class using friend function
//? (3:25pm,3 May,2020 & 9:53pm,15 August,2020)
//? (16 June,2025)
// a friend function can be common friend function of two or more classes
// A function friendly two or more classes
#include <iostream>

using namespace std;

class class_2; // Forward Declaration

class class_1 // declaration and definition of class class_1
{
    int data_member_class_1;       // private data member
    friend void friend_function(); // non-member function
};

class class_2 // defining class class_2
{
    int data_member_class_2;       // private data member
    friend void friend_function(); // non-member function
};

/*
using friend function we can access private data member of two or more classes by object and then can take input, initialize, manipulate the private
data members together through objects so it makes our task easy
*/
void friend_function() // defining friend function which is common for both class class_1 and class_2
{
    class_1 object_one; // creating object of class class_1
    class_2 object_two; // creating object of class class_2

    cout << "Enter an integer for data_member_class_1 : ";
    cin >> object_one.data_member_class_1; // accessing private data member of class class_1 through object by friend function
    cout << "Enter an integer for data_member_class_2 : ";
    cin >> object_two.data_member_class_2; // accessing private data member of class class_2 through object by friend function

    cout << "\nTotal : " << object_one.data_member_class_1 + object_two.data_member_class_2 << endl;
}

int main()
{
    friend_function(); // calling friend function
    return 0;
}
