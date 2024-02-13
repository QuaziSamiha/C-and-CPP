//Operate on objects of two different class using friend function (3:25pm,3 May,2020 & 9:52pm,15 August,2020)
// a function can be friend two or more class
// A function friendly two or more classes
#include<iostream>

using namespace std;

class class_2; // Forward Declaration

class class_1 // declaration and definition of class class_1
{
    int data_member_class_1; // private member
public :
    void member_function_class_1(void) // member function
    {
        cout<<"Enter an integer for data_member_class_1 : ";
        cin>>data_member_class_1;
    }
    friend void friend_function(class_1, class_2);  // non-member function
};

class class_2 // defining class class_2
{
    int data_member_class_2; // private member
public :
    void member_function_class_2(void) // member function
    {
        cout<<"Enter an integer for data_member_class_2 : ";
        cin>>data_member_class_2;
    }
    friend void friend_function(class_1, class_2); // non-member function
};

void friend_function(class_1 object_1, class_2 object_2) // defining friend function
{
    // accessing private data member of both classes through object by one common friend function
    cout<<"\nTotal : "<<object_1.data_member_class_1+object_2.data_member_class_2<<endl;
}

int main()
{
    class_1 object_one; // creating object of class class_1
    class_2 object_two; // creating object of class class_2

    object_one.member_function_class_1(); // calling member function of class class_1
    object_two.member_function_class_2(); // calling member function of class class_2

    friend_function(object_one, object_two); //calling friend function and passing objects of both classes
    return 0;
}

