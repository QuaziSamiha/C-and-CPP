// Returning object with friend
//? (10:31pm,5 May,2020 & 9:56pm,15 August,2020)
//? (February & March & September, 2024)
//? (16 June,2025)
#include <iostream>

using namespace std;

class class_name
{
    int m1, m2, m3; // private data member of class class_1
public:
    void function_1(void);                         // member function of class_1
    void function_2(void);                         // member function of class_1
    friend class_name friend_function(class_name); // declaring non-member function of class_1 type
};

void class_name::function_1() // defining  member function of class
{
    cout << "Enter two integers : ";
    cin >> m1 >> m2;
}

void class_name::function_2() // defining  member function of class
{
    cout << "\nTotal : " << m3;
}

class_name friend_function(class_name object) // defining friend function (non-member function) of class_1 type
{
    object.m3 = object.m1 + object.m2; // accessing private data member of class
    return object;
}

int main()
{
    class_name object_one, object_two; // creating object
    object_one.function_1();           // calling member function

    object_two = friend_function(object_one); // calling friend function and passing object

    object_two.function_2(); // calling member function and it will show addition
    return 0;
}
