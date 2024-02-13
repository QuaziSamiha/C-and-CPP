// two classes can be friend of each other                             (12:23am,4 May,2020 & 9:56pm,15 August,2020)
// A function friendly two or more classes
// All the member function of one class as the friend function of another class
#include<iostream>

using namespace std;

class class_2; // forward declaration

class class_1
{
    int data_member_class_1; // private data member
public :
    void member_function_class_1(void); // public member function declaration

    friend class_2; // friend class (all member function of class_2 are friend of class_1)
    /*
    class_1 is friend of class_2 so all the member functions of class_2 can access all the data member of class_1 whatever
    they are public,private or protected
    */
};

class class_2
{
    int data_member_class_2; // private data member
public :
    void member_function_class_2(void); // declaring member function

    friend class_1; // friend class (all member function of class_1 are friend of class_2)
    /*
    class_2 is friend of class_1 so all the member functions of class_1 can access all the data member of class_2 whatever
    they are public,private or protected
    */
};

void class_1::member_function_class_1(void) // defining member function of class_1
{
    cout<<"\nEnter an integer : ";
    cin>>data_member_class_1;

    class_2  object; // creating object of class class_2
    cout<<"Enter an integer : ";
    cin>>object.data_member_class_2; // accessing private data member of class_2 through object by member function of class_1
}

void class_2::member_function_class_2(void) // defining member function of class_2
{
    class_1  object; // creating object of class class_2
    cout<<"Integer value data_member_class_1 : "<<object.data_member_class_1<<endl;
    // accessing private data member of class_1 through object by member function of class_2

    cout<<"Integer value data_member_class_2 : "<<data_member_class_2<<endl;
    // accessing private data member of class_2 without object by member function of class_2
}

int main()
{
    class_1  object_1;  // creating object of class class_1
    class_2  object_2;  // creating object of class class_2

    object_1.member_function_class_1(); // calling member function of class_1
    object_2.member_function_class_2(); // calling member function of class_2
    return 0;
}
