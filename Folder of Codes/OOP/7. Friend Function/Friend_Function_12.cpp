// friend function call by reference  (11:53pm,5 May,2020 & 9:57pm,15 August,2020)
#include<iostream>

using namespace std;

class class_2; // forward declaration

class class_1 // declaring and defining class
{
    int data_member_class_1; // private data member
public :
    void member_function_1_class_1(); // declaring member function
    void member_function_2_class_1(); // declaring member function

    friend void friend_function(class_1&, class_2&);  // declaring friend function
};

class class_2 // defining class
{
    int data_member_class_2; // private data member
public :
    void member_function_1_class_2(); // declaring member function
    void member_function_2_class_2(); // declaring member function

    friend void friend_function(class_1&, class_2&);  // declaring friend function
};

inline void class_1::member_function_1_class_1() // defining member function of class_1
{
    cout<<"Enter an integer for class_1: ";
    cin>>data_member_class_1;
}

inline void class_1::member_function_2_class_1() // defining member function of class_1
{
    cout<<"class_1 integer : "<<data_member_class_1<<endl;
}

inline void class_2::member_function_1_class_2() // defining member function of class_2
{
    cout<<"Enter an integer for class_2: ";
    cin>>data_member_class_2;
}

inline void class_2::member_function_2_class_2() // defining member function class_2
{
    cout<<"class_2 integer : "<<data_member_class_2<<endl;
}

void friend_function(class_1 &object_one, class_2 &object_two)//defining friend function which is common for both class
{
    int v; // declaring v = local variable of friend function

    // accessing private data member of both classes and swapping them
    v = object_one.data_member_class_1;
    object_one.data_member_class_1 = object_two.data_member_class_2;
    object_two.data_member_class_2 = v;
}
int main()
{
    class_1 object_1; // creating object of class_1
    class_2 object_2; // creating object of class_2

    object_1.member_function_1_class_1(); // calling member function of class_1
    object_2.member_function_1_class_2(); // calling member function of class_2

    cout<<endl<<"Before Swapping : "<<endl;
    object_1.member_function_2_class_1(); // calling member function of class class_1
    object_2.member_function_2_class_2(); // calling member function of class class_2

    friend_function(object_1, object_2); // calling friend function and passing object

    cout<<endl<<"After Swapping : "<<endl;
    object_1.member_function_2_class_1(); // calling member function of class class_1
    object_2.member_function_2_class_2(); // calling member function of class class_2
    return 0;
    /*
    if we change object of friend function then object of main function will be changed also...and this is the
    concept of call by reference.
    */
}
