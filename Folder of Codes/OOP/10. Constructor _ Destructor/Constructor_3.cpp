// constructor can be defined inside the class  // (10:40pm,9 May,2020 & 10:17pm,16 August,2020)
#include<iostream>

using namespace std;

class class_name
{
private :
    int data_member_1, data_member_2;
public :
    class_name() // constructor member function is defined inside the class
    {
        data_member_1 = 12;  //constructor value initialized
        data_member_2 = 115; //constructor value initialized
        cout<<"data_member_1 : "<<data_member_1<<endl;
        cout<<"data_member_2 : "<<data_member_2<<endl;
    }
};

int main()
{
    class_name object; // constructor is automatically called when object is created
    return 0;
}
