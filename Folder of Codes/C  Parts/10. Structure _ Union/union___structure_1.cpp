// difference  between structure and union
#include<iostream>

using namespace std;

struct structure_name // size = 20 bytes + 2 bytes =22 bytes
{
    char structure_member_1[20]; // (1 byte) x 20 = 20 bytes
    short int structure_member_2; // 2 bytes
}structure_variable;

union union_name // 20 bytes
{
    char union_member_1[20]; // (1 byte) x 20 = 20 bytes
    short int union_member_2; // 2 bytes
}union_variable;

int main()
{
    cout<<"Difference  between structure and union : "<<endl<<endl;

    cout<<"size of structure : "<<sizeof(structure_variable)<<endl;
    cout<<"size of structure_member_1 : "<<sizeof(structure_variable.structure_member_1)<<endl;
    cout<<"size of structure_member_2 : "<<sizeof(structure_variable.structure_member_2)<<endl;

    cout<<endl;
    cout<<"size of union : "<<sizeof(union_variable)<<endl;
    cout<<"size of union_member_1 : "<<sizeof(union_variable.union_member_1)<<endl;
    cout<<"size of union_member_2 : "<<sizeof(union_variable.union_member_2)<<endl;
}
