#include<iostream>  // (10:40pm,9 May,2020 & 10:14pm,16 August,2020)

using namespace std;

// constructor has to declare in public section

class class_name
{
public :
    class_name() // declaring and defining constructor
    {
        cout<<"constructor"<<endl;
    }
};

int main()
{
    class_name  object; // object object_1 is automatically initialized through the class constructor

    return 0;
}
