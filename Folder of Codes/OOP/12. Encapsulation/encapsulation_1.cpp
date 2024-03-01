// 01.03.24
#include<iostream>
#include<string>

/*
Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. 
In Object Oriented Programming, Encapsulation is defined as binding together the data and 
the functions that manipulate them.
*/

/*
The process of implementing encapsulation can be sub-divided into two steps:
1. Creating a class to encapsulate all the data and methods into a single unit.
2. Hiding relevant data using access specifiers.
*/

using namespace std;

// encapsulation is a process of combining variables and functions in a single unit(class)

class class_name
{
public :
    int m1;
    string m2;
    void function_1(void)
    {
        cout << "m2 : " << m2 << endl;
        cout << "m1 : " << m1 << endl;
    }
};

int main()
{
    class_name ob;

    ob.m1 = 2020;
    ob.m2 = "17 August";
    ob.function_1();
}

// Encapsulation also leads to data abstraction.

/*
Two Important property of Encapsulation 
Data Protection: Encapsulation protects the internal state of an object by keeping its data members 
private. Access to and modification of these data members is restricted to the class’s public methods, 
ensuring controlled and secure data manipulation.
Information Hiding: Encapsulation hides the internal implementation details of 
a class from external code. Only the public interface of the class is accessible, providing 
abstraction and simplifying the usage of the class while allowing the internal implementation to be 
modified without impacting external code.
*/

/*
Consider a real-life example of encapsulation, in a company, there are different sections like the 
accounts section, finance section, sales section, etc. Now,
The finance section handles all the financial transactions and keeps records of all the data related to 
finance. Similarly, the sales section handles all the sales-related activities and keeps records of all 
the sales. Now there may arise a situation when for some reason an official from the finance section 
needs all the data about sales in a particular month.
In this case, he is not allowed to directly access the data of the sales section. He will first have to 
contact some other officer in the sales section and then request him to give the particular data.
This is what Encapsulation is. Here the data of the sales section and the employees that can manipulate 
them are wrapped under a single name “sales section”. 
*/

/*
Role of Access Specifiers in Encapsulation:
Access specifiers facilitate Data Hiding in C++ programs by restricting access to the class 
member functions and data members. 
There are three types of access specifiers in C++:
1. Private: Private access specifier means that the member function or data member can only 
be accessed by other member functions of the same class.
2. Protected: A protected access specifier means that the member function or data member can 
be accessed by other member functions of the same class or by derived classes.
3. Public: Public access specifier means that the member function or data member can be accessed 
by any code. 
By default, all data members and member functions of a class are made private by the compiler.
*/