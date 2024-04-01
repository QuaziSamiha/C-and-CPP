// size of union
#include<iostream>

using namespace std;

union union_1 // union size = 4 bytes
{
    int member_1, member_2; // each of member is integer. integer takes 4 bytes
};

union union_2 // union size = 4 bytes
{
    char member_1; // character takes 1 byte
    int member_2; // integer takes 4 bytes
};

union union_3 // union size = 20 bytes
{
    char string_member[20]; // 1*20 = 20 bytes. since each character takes 1 byte
    double member; // double takes 8 bytes
};

int main()
{
    union union_1 variable_1;
    union union_2 variable_2;
    union union_3 variable_3;

    cout<<"sizeof(union_1) : "<<sizeof(variable_1)<<endl;
    cout<<"sizeof(union_2) : "<<sizeof(variable_2)<<endl;
    cout<<"sizeof(union_3) : "<<sizeof(variable_3)<<endl;
}
