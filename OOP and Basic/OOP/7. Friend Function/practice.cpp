// Returning object with friend    (10:30pm,5 May,2020 & 9:57pm,15 August,2020)
#include<iostream>

using namespace std;

class class_name
{
    int m; // private data member of class_1
public :
    void function_1(void);  // member function of class class_1
    void function_2(void);  // member function of class class_1

    friend class_name friend_function(class_name, class_name);  // declaring friend function (non-member function) of class_1 type
};

class_name friend_function(class_name object_1, class_name object_2) // defining friend function outside of class
{
    class_name  object; // creating object
    object.m = object_1.m + object_2.m; // accessing private data member
    return object;
}

void class_name::function_1() // defining member function of class
{
    cout<<"Enter an integer : ";
    cin>>m;
}

void class_name::function_2() // defining member function of class
{
    cout << "\nTotal : " << m << endl;
}

int main()
{
    class_name object_one,object_two,object_three; // creating object
    object_one.function_1(); // calling member function to take input
    object_two.function_1(); // calling member function to take input

    object_three = friend_function(object_one, object_two); // calling friend function and passing object
    object_three.function_2(); // calling member function and it will show addition
    return 0;
}

