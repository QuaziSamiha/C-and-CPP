#include <iostream>
//? (11:39am,19 August,2020) Rajshahi (filling up academic gap)
//? 24.03.24 Arambag, Mirpur, Dhaka (random interview preparation)
//? 07.09.24 Ranavola, Uttora, Dhaka (BUET MSc Test Preparation)
//? 18 June, 2025 Ranavola, Uttora, Dhaka (Welldev interview preparation)
using namespace std;
/*
Function Overriding in C++
A function is a block of statements that together performs a specific task by taking some input
and producing a particular output. Function overriding in C++ is termed as the redefinition of base class
function in its derived class with the same signature i.e. return type and parameters. It falls
under the category of Runtime Polymorphism.
*/
class class_1
{
public:
    void member_function(void) // overridden function
    {
        cout << "class_1" << endl;
    }
};

class class_2 : public class_1
{
public:
    void member_function(void) // override function
    {
        cout << "class_2" << endl;
    }
};

// class class_3 : public class_1
// {
// public :
//     void member_function(void) // override function
//     {
//         cout << "class_3" << endl;
//     }
// };

int main()
{
    class_1 ob1;
    ob1.member_function();

    class_2 ob2;
    ob2.member_function();

    // class_3 ob3;
    // ob3.member_function();
    return 0;
}

/*

class_1
class_2

*/
