// a entire class can be friend of another class
//? (10:55pm,3 May,2020 & 9:52pm,15 August,2020)
//? (February & March & September, 2024)
//? (16 June,2025)
// A function friendly two or more classes
// All the member function of one class as the friend function of another class
#include <iostream>

using namespace std;

// class class_2; // forward declaration

class class_1
{
    int data_member_class_1; // private data member
public:
    void member_function_class_1(void); // public member function declaration

    friend class class_2;
    // declaring a class and also make it friend (all member functions of class_2 are friend of class_1)
    /*
    class_2 is friend of class_1 so member functions of class_2 can access all the data member of class_1 whatever they
    are public,private or protected
    but class_1 is not friend of class_2 so member function of class_1 cannot access the data member of class_2 whatever they
    are public,private or protected
    */
};

class class_2
{
public:
    void member_function_1_class_2(class_1 object) // member function declaration and definition inside class
    {
        cout << "\n   member_function_1_class_2 " << endl;
        cout << "Integer value data_member_class_1 : " << object.data_member_class_1 << endl;
        // accessing private data member of class_1 through object by member function of class_2
    }
    void member_function_2_class_2(class_1); // declaring member function
};

void class_1::member_function_class_1(void) // public member function definition of class_1
{
    cout << "   member_function_class_1 " << endl;
    cout << "Enter an integer : ";
    cin >> data_member_class_1;
}

void class_2::member_function_2_class_2(class_1 object) // defining member function of class_2 outside class
{
    cout << "\n   member_function_2_class_2 " << endl;
    cout << "Integer value data_member_class_1 : " << object.data_member_class_1 << endl;
    // accessing private data member of class_1 through object by member function of class_2
}

int main()
{
    class_1 object_1; // creating object of class class_1
    class_2 object_2; // creating object of class class_2

    object_1.member_function_class_1(); // calling member function of class class_1

    object_2.member_function_1_class_2(object_1); // calling member function of class_2 and passing object of class_1
    object_2.member_function_2_class_2(object_1); // calling member function of class_2 and passing object of class_1
    return 0;
}
