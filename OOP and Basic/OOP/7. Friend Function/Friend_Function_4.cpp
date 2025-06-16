// Member function of one class can be friend function of another class
//? (3:25pm,3 May,2020 & 9:52pm,15 August,2020)
//? (February & March & September, 2024)
//? (16 June,2025)
// A function friendly two or more classes
#include <iostream>

using namespace std;

class class_2; // good practice forward declaration (prototype)

class class_1
{
    int data_member_class_1; // private data member
public:
    void member_function_class_1();
};

class class_2
{
    int data_member_class_2;                        // private data member
    friend void class_1::member_function_class_1(); // member function of class_1 is friend function of class_2
};

void class_1::member_function_class_1() // defining friend function of class_2 and member function of class_1
{
    class_2 object; // creating objects of class_2
    // accessing private data members of two classes
    data_member_class_1 = 13; // as member function so can access without object
    cout << "class_1 : " << data_member_class_1 << endl;
    object.data_member_class_2 = 12; // as friend function so accessing through object
    cout << "class_2 : " << object.data_member_class_2 << endl;
}

int main()
{
    class_1 object;                   // creating object of class class_1
    object.member_function_class_1(); // calling member function of class class_1 through object
    return 0;
}
