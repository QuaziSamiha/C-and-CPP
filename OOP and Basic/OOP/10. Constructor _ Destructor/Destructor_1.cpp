#include <iostream>
//? (11:43pm,11 May,2020 & 7:19am,17 august,2020)
//? February, March, August, September, 2024
//? 17 June, 2025
// #include<conio.h>

using namespace std;

class class_name
{
private:
    char data_member_1[10], data_member_2[10];
    int data_member_3, data_member_4;

public:
    class_name();  // constructor
    ~class_name(); // destructor
    void member_function_1();
    void member_function_2();
};

class_name::class_name() // defining constructor
{
    cout << "Constructor" << endl;
}

void class_name::member_function_1()
{
    cout << "\nEnter a string : ";
    cin >> data_member_1;
    cout << "Enter an integer : ";
    cin >> data_member_3;
}

void class_name::member_function_2()
{
    cout << "\nString : " << data_member_1 << endl;
    cout << "Integer : " << data_member_3 << endl;
}

class_name::~class_name() // defining destructor
{
    cout << endl
         << "Destructor" << endl;
}

int main()
{
    class_name object_one;

    object_one.member_function_1();
    object_one.member_function_2();
}
